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

  subroutine define_subregions_basin(myrank,isubregion,iaddx,iaddy,iaddz, &
        ix1,ix2,dix,iy1,iy2,diy,ir1,ir2,dir,iax,iay,iar, &
        doubling_index,npx,npy, &
        NER_BOTTOM_MOHO,NER_MOHO_16,NER_16_BASEMENT,NER_BASEMENT_SEDIM,NER_SEDIM,NER)

! define shape of elements in current subregion of the mesh

  implicit none

  include "constants.h"

  integer myrank
  integer ix1,ix2,dix,iy1,iy2,diy,ir1,ir2,dir
  integer iax,iay,iar
  integer isubregion,doubling_index
  integer npx,npy

  integer NER_BOTTOM_MOHO,NER_MOHO_16,NER_16_BASEMENT,NER_BASEMENT_SEDIM,NER_SEDIM,NER

! topology of the elements
  integer iaddx(NGNOD)
  integer iaddy(NGNOD)
  integer iaddz(NGNOD)

! **************

! this last region only defined when NER_SEDIM > 1
  if(isubregion == 30) then

    call usual_hex_nodes(iaddx,iaddy,iaddz)

    iy1=0
    iy2=npy-2
    diy=2

    ix1=0
    ix2=npx-2
    dix=2

    ir1=2*(NER - NER_SEDIM)
    ir2=2*(NER - 2)
    dir=2

    iax=1
    iay=1
    iar=1

    doubling_index = IFLAG_BASEMENT_TOPO

  else if(isubregion == 29) then

    call usual_hex_nodes(iaddx,iaddy,iaddz)

    iy1=0
    iy2=npy-2
    diy=2

    ix1=0
    ix2=npx-2
    dix=2

    ir1=2*(NER - 1)
    ir2=ir1
    dir=2

    iax=1
    iay=1
    iar=1

    doubling_index = IFLAG_ONE_LAYER_TOPOGRAPHY

  else if(isubregion == 28) then

    call usual_hex_nodes(iaddx,iaddy,iaddz)

    iy1=0
    iy2=npy-8
    diy=8

    ix1=0
    ix2=npx-8
    dix=8

    ir1= 0
    ir2= 2*NER_BOTTOM_MOHO-8
    dir=8

    iax=4
    iay=4
    iar=4

    doubling_index= IFLAG_HALFSPACE_MOHO

  else if(isubregion == 27) then

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

    doubling_index=IFLAG_16km_BASEMENT

  else if(isubregion == 26) then

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

    doubling_index=IFLAG_16km_BASEMENT

  else if(isubregion == 25) then

    call unusual_hex_nodes2(iaddx,iaddy,iaddz)

! generating stage 4 of the mesh doubling below 670

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

    doubling_index=IFLAG_16km_BASEMENT

  else if(isubregion == 24) then

    call unusual_hex_nodes2p(iaddx,iaddy,iaddz)

! generating stage 5 of the mesh doubling below 670

    iy1=0
    iy2=npy-8
    diy=8

    ix1=12
    ix2=npx-4
    dix=16

    dir=4

    iax=2
    iay=2
    iar=1

    ir1=2*(NER_BOTTOM_MOHO + NER_MOHO_16 + NER_16_BASEMENT) - 6
    ir2=ir1

    doubling_index=IFLAG_16km_BASEMENT

  else if(isubregion == 23) then

    call unusual_hex_nodes3(iaddx,iaddy,iaddz)

! generating stage 6 of the mesh doubling below 670

    iy1=0
    iy2=npy-8
    diy=8

    ix1=4
    ix2=npx-12
    dix=16

    dir=4

    iax=2
    iay=2
    iar=1

    ir1=2*(NER_BOTTOM_MOHO + NER_MOHO_16 + NER_16_BASEMENT) - 6
    ir2=ir1

    doubling_index=IFLAG_16km_BASEMENT

  else if(isubregion == 22) then

    call unusual_hex_nodes3(iaddx,iaddy,iaddz)

! generating stage 7 of the mesh doubling below 670

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

    ir1=2*(NER_BOTTOM_MOHO + NER_MOHO_16 + NER_16_BASEMENT) - 6
    ir2=ir1

    doubling_index=IFLAG_16km_BASEMENT

  else if(isubregion == 21) then

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

    doubling_index=IFLAG_16km_BASEMENT

  else if(isubregion == 20) then

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

    doubling_index=IFLAG_16km_BASEMENT

  else if(isubregion == 19) then

    call usual_hex_nodes(iaddx,iaddy,iaddz)

! generating stage 10 of the mesh doubling below 670

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

    ir1=2*(NER_BOTTOM_MOHO + NER_MOHO_16 + NER_16_BASEMENT) - 2
    ir2=ir1

    doubling_index=IFLAG_16km_BASEMENT

  else if(isubregion == 18) then

    call usual_hex_nodes(iaddx,iaddy,iaddz)

! generating stage 11 of the mesh doubling below 670

    iy1=4
    iy2=npy-12
    diy=16

    ix1=0
    ix2=npx-4
    dix=4

    dir=4

    iax=2
    iay=2
    iar=1

    ir1=2*(NER_BOTTOM_MOHO + NER_MOHO_16 + NER_16_BASEMENT) - 2
    ir2=ir1

    doubling_index=IFLAG_16km_BASEMENT

  else if(isubregion == 17) then

    call unusual_hex_nodes6(iaddx,iaddy,iaddz)

! generating stage 12 of the mesh doubling below 670

    iy1=12
    iy2=npy-4
    diy=16

    ix1=0
    ix2=npx-4
    dix=4

    dir=4

    iax=2
    iay=2
    iar=1

    ir1=2*(NER_BOTTOM_MOHO + NER_MOHO_16 + NER_16_BASEMENT) - 2
    ir2=ir1

    doubling_index=IFLAG_16km_BASEMENT

  else if(isubregion == 16) then

    call unusual_hex_nodes6p(iaddx,iaddy,iaddz)

! generating stage 13 of the mesh doubling below 670

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

    doubling_index=IFLAG_16km_BASEMENT

  else if(isubregion == 15) then

    call usual_hex_nodes(iaddx,iaddy,iaddz)

    iy1=0
    iy2=npy-8
    diy=8

    ix1=0
    ix2=npx-8
    dix=8

! honor So-Cal model discontinuity at 16 km for accuracy
    ir1=2*NER_BOTTOM_MOHO
    ir2=2*(NER_BOTTOM_MOHO+NER_MOHO_16) - 4
    dir=4

    iax=4
    iay=4
    iar=2

    doubling_index = IFLAG_MOHO_16km

  else if(isubregion == 14) then

    call usual_hex_nodes(iaddx,iaddy,iaddz)

    iy1=0
    iy2=npy-8
    diy=8

    ix1=0
    ix2=npx-8
    dix=8

! honor So-Cal model discontinuity at 16 km for accuracy
    ir1=2*(NER_BOTTOM_MOHO+NER_MOHO_16)
    ir2=2*(NER_BOTTOM_MOHO+NER_MOHO_16+NER_16_BASEMENT)-12
    dir=4

    iax=4
    iay=4
    iar=2

    doubling_index = IFLAG_16km_BASEMENT


  else if(isubregion == 13) then

    call usual_hex_nodes(iaddx,iaddy,iaddz)

! generating stage 1 of the mesh doubling below the Moho

    iy1=0
    iy2=npy-4
    diy=4

    ix1=0
    ix2=npx-4
    dix=4

    ir1=2*(NER_BOTTOM_MOHO+NER_MOHO_16+NER_16_BASEMENT)
    ir2=2*(NER_BOTTOM_MOHO+NER_MOHO_16+NER_16_BASEMENT+NER_BASEMENT_SEDIM)-12
    dir=4

    iax=2
    iay=2
    iar=2

    doubling_index=IFLAG_BASEMENT_TOPO

  else if(isubregion == 12) then

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

    doubling_index=IFLAG_BASEMENT_TOPO

  else if(isubregion == 11) then

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

    doubling_index=IFLAG_BASEMENT_TOPO

  else if(isubregion == 10) then

    call unusual_hex_nodes2(iaddx,iaddy,iaddz)

! generating stage 4 of the mesh doubling below the Moho

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

    doubling_index=IFLAG_BASEMENT_TOPO

  else if(isubregion == 9) then

    call unusual_hex_nodes2p(iaddx,iaddy,iaddz)

! generating stage 5 of the mesh doubling below the Moho

    iy1=0
    iy2=npy-4
    diy=4

    ix1=6
    ix2=npx-2
    dix=8

    dir=4

    iax=1
    iay=1
    iar=1

    ir1=2*(NER_BOTTOM_MOHO+NER_MOHO_16+NER_16_BASEMENT+NER_BASEMENT_SEDIM)-6
    ir2=ir1

    doubling_index=IFLAG_BASEMENT_TOPO

  else if(isubregion == 8) then

    call unusual_hex_nodes3(iaddx,iaddy,iaddz)

! generating stage 6 of the mesh doubling below the Moho

    iy1=0
    iy2=npy-4
    diy=4

    ix1=2
    ix2=npx-6
    dix=8

    dir=4

    iax=1
    iay=1
    iar=1

    ir1=2*(NER_BOTTOM_MOHO+NER_MOHO_16+NER_16_BASEMENT+NER_BASEMENT_SEDIM)-6
    ir2=ir1

    doubling_index=IFLAG_BASEMENT_TOPO

  else if(isubregion == 7) then

    call unusual_hex_nodes3(iaddx,iaddy,iaddz)

! generating stage 7 of the mesh doubling below the Moho

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

    ir1=2*(NER_BOTTOM_MOHO+NER_MOHO_16+NER_16_BASEMENT+NER_BASEMENT_SEDIM)-6
    ir2=ir1

    doubling_index=IFLAG_BASEMENT_TOPO

  else if(isubregion == 6) then

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

    doubling_index=IFLAG_BASEMENT_TOPO

  else if(isubregion == 5) then

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

    doubling_index=IFLAG_BASEMENT_TOPO

  else if(isubregion == 4) then

    call usual_hex_nodes(iaddx,iaddy,iaddz)

! generating stage 10 of the mesh doubling below the Moho

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

    ir1=2*(NER_BOTTOM_MOHO+NER_MOHO_16+NER_16_BASEMENT+NER_BASEMENT_SEDIM)-2
    ir2=ir1

    doubling_index=IFLAG_BASEMENT_TOPO

  else if(isubregion == 3) then

    call usual_hex_nodes(iaddx,iaddy,iaddz)

! generating stage 11 of the mesh doubling below the Moho

    iy1=2
    iy2=npy-6
    diy=8

    ix1=0
    ix2=npx-2
    dix=2

    dir=4

    iax=1
    iay=1
    iar=1

    ir1=2*(NER_BOTTOM_MOHO+NER_MOHO_16+NER_16_BASEMENT+NER_BASEMENT_SEDIM)-2
    ir2=ir1

    doubling_index=IFLAG_BASEMENT_TOPO

  else if(isubregion == 2) then

    call unusual_hex_nodes6(iaddx,iaddy,iaddz)

! generating stage 12 of the mesh doubling below the Moho

    iy1=6
    iy2=npy-2
    diy=8

    ix1=0
    ix2=npx-2
    dix=2

    dir=4

    iax=1
    iay=1
    iar=1

    ir1=2*(NER_BOTTOM_MOHO+NER_MOHO_16+NER_16_BASEMENT+NER_BASEMENT_SEDIM)-2
    ir2=ir1

    doubling_index=IFLAG_BASEMENT_TOPO

  else if(isubregion == 1) then

    call unusual_hex_nodes6p(iaddx,iaddy,iaddz)

! generating stage 13 of the mesh doubling below the Moho

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

    doubling_index=IFLAG_BASEMENT_TOPO

  else

    call exit_MPI(myrank,'incorrect subregion code')

  endif

  end subroutine define_subregions_basin

