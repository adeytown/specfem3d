!=====================================================================
!
!          S p e c f e m 3 D  B a s i n  V e r s i o n  1 . 2
!          --------------------------------------------------
!
!                 Dimitri Komatitsch and Jeroen Tromp
!    Seismological Laboratory - California Institute of Technology
!         (c) California Institute of Technology July 2004
!
!    A signed non-commercial agreement is required to use this program.
!   Please check http://www.gps.caltech.edu/research/jtromp for details.
!           Free for non-commercial academic research ONLY.
!      This program is distributed WITHOUT ANY WARRANTY whatsoever.
!      Do not redistribute this program without written permission.
!
!=====================================================================

  subroutine define_subregions_heuristic(myrank,isubregion,iaddx,iaddy,iaddz, &
        ix1,ix2,dix,iy1,iy2,diy,ir1,ir2,dir,iax,iay,iar, &
        itype_element,npx,npy, &
        NER_BOTTOM_MOHO,NER_MOHO_16,NER_16_BASEMENT,NER_BASEMENT_SEDIM)

! heuristic rule to deform elements to balance angles
! to 120 degrees in doubling regions

  implicit none

  include "constants.h"

  integer myrank
  integer ix1,ix2,dix,iy1,iy2,diy,ir1,ir2,dir
  integer iax,iay,iar
  integer isubregion,itype_element
  integer npx,npy

  integer NER_BOTTOM_MOHO,NER_MOHO_16,NER_16_BASEMENT,NER_BASEMENT_SEDIM

! topology of the elements
  integer iaddx(NGNOD)
  integer iaddy(NGNOD)
  integer iaddz(NGNOD)

! **************

  if(isubregion == 8) then

    call unusual_hex_nodes1(iaddx,iaddy,iaddz)

! generating stage 2 of the mesh doubling below 670

    iy1=0
    iy2=npy-8
    diy=8

    ix1=0
    ix2=npx-16
    dix=16

    dir=4

    iax=2
    iay=2
    iar=1

    ir1=2*(NER_BOTTOM_MOHO + NER_MOHO_16 + NER_16_BASEMENT) - 8
    ir2=ir1

    itype_element = ITYPE_UNUSUAL_1

  else if(isubregion == 7) then

    call unusual_hex_nodes1p(iaddx,iaddy,iaddz)

! generating stage 3 of the mesh doubling below 670

    iy1=0
    iy2=npy-8
    diy=8

    ix1=8
    ix2=npx-8
    dix=16

    dir=4

    iax=2
    iay=2
    iar=1

    ir1=2*(NER_BOTTOM_MOHO + NER_MOHO_16 + NER_16_BASEMENT) - 8
    ir2=ir1

    itype_element = ITYPE_UNUSUAL_1p

  else if(isubregion == 6) then

    call unusual_hex_nodes4(iaddx,iaddy,iaddz)

! generating stage 8 of the mesh doubling below 670

    iy1=8
    iy2=npy-8
    diy=16

    ix1=0
    ix2=npx-4
    dix=4

    dir=4

    iax=2
    iay=2
    iar=1

    ir1=2*(NER_BOTTOM_MOHO + NER_MOHO_16 + NER_16_BASEMENT) - 4
    ir2=ir1

    itype_element = ITYPE_UNUSUAL_4

  else if(isubregion == 5) then

    call unusual_hex_nodes4p(iaddx,iaddy,iaddz)

! generating stage 9 of the mesh doubling below 670

    iy1=0
    iy2=npy-16
    diy=16

    ix1=0
    ix2=npx-4
    dix=4

    dir=4

    iax=2
    iay=2
    iar=1

    ir1=2*(NER_BOTTOM_MOHO + NER_MOHO_16 + NER_16_BASEMENT) - 4
    ir2=ir1

    itype_element = ITYPE_UNUSUAL_4p

  else if(isubregion == 4) then

    call unusual_hex_nodes1(iaddx,iaddy,iaddz)

! generating stage 2 of the mesh doubling below the Moho

    iy1=0
    iy2=npy-4
    diy=4

    ix1=0
    ix2=npx-8
    dix=8

    dir=4

    iax=1
    iay=1
    iar=1

    ir1=2*(NER_BOTTOM_MOHO+NER_MOHO_16+NER_16_BASEMENT+NER_BASEMENT_SEDIM)-8
    ir2=ir1

    itype_element = ITYPE_UNUSUAL_1

  else if(isubregion == 3) then

    call unusual_hex_nodes1p(iaddx,iaddy,iaddz)

! generating stage 3 of the mesh doubling below the Moho

    iy1=0
    iy2=npy-4
    diy=4

    ix1=4
    ix2=npx-4
    dix=8

    dir=4

    iax=1
    iay=1
    iar=1

    ir1=2*(NER_BOTTOM_MOHO+NER_MOHO_16+NER_16_BASEMENT+NER_BASEMENT_SEDIM)-8
    ir2=ir1

    itype_element = ITYPE_UNUSUAL_1p

  else if(isubregion == 2) then

    call unusual_hex_nodes4(iaddx,iaddy,iaddz)

! generating stage 8 of the mesh doubling below the Moho

    iy1=4
    iy2=npy-4
    diy=8

    ix1=0
    ix2=npx-2
    dix=2

    dir=4

    iax=1
    iay=1
    iar=1

    ir1=2*(NER_BOTTOM_MOHO+NER_MOHO_16+NER_16_BASEMENT+NER_BASEMENT_SEDIM)-4
    ir2=ir1

    itype_element = ITYPE_UNUSUAL_4

  else if(isubregion == 1) then

    call unusual_hex_nodes4p(iaddx,iaddy,iaddz)

! generating stage 9 of the mesh doubling below the Moho

    iy1=0
    iy2=npy-8
    diy=8

    ix1=0
    ix2=npx-2
    dix=2

    dir=4

    iax=1
    iay=1
    iar=1

    ir1=2*(NER_BOTTOM_MOHO+NER_MOHO_16+NER_16_BASEMENT+NER_BASEMENT_SEDIM)-4
    ir2=ir1

    itype_element = ITYPE_UNUSUAL_4p

  else

    call exit_MPI(myrank,'incorrect subregion code')

  endif

  end subroutine define_subregions_heuristic

