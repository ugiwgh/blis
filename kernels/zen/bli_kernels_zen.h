/*

   BLIS
   An object-based framework for developing high-performance BLAS-like
   libraries.

   Copyright (C) 2014, The University of Texas at Austin

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    - Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    - Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    - Neither the name of The University of Texas at Austin nor the names
      of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
   HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

// -- level-1v --

// amaxv (intrinsics)
AMAXV_KER_PROT( float,    s, amaxv_zen_int )
AMAXV_KER_PROT( double,   d, amaxv_zen_int )

// axpyv (intrinsics)
AXPYV_KER_PROT( float,    s, axpyv_zen_int )
AXPYV_KER_PROT( double,   d, axpyv_zen_int )

	// axpyv (intrinsics unrolled x10)
	AXPYV_KER_PROT( float,    s, axpyv_zen_int10 )
	AXPYV_KER_PROT( double,   d, axpyv_zen_int10 )

// dotv (intrinsics)
DOTV_KER_PROT( float,    s, dotv_zen_int )
DOTV_KER_PROT( double,   d, dotv_zen_int )

	// dotv (intrinsics, unrolled x10)
	DOTV_KER_PROT( float,    s, dotv_zen_int10 )
	DOTV_KER_PROT( double,   d, dotv_zen_int10 )

// dotxv (intrinsics)
DOTXV_KER_PROT( float,    s, dotxv_zen_int )
DOTXV_KER_PROT( double,   d, dotxv_zen_int )

// scalv (intrinsics)
SCALV_KER_PROT( float,    s, scalv_zen_int )
SCALV_KER_PROT( double,   d, scalv_zen_int )

	// scalv (intrinsics unrolled x10)
	SCALV_KER_PROT( float,    s, scalv_zen_int10 )
	SCALV_KER_PROT( double,   d, scalv_zen_int10 )

// -- level-1f --

// axpyf (intrinsics)
AXPYF_KER_PROT( float,    s, axpyf_zen_int_8 )
AXPYF_KER_PROT( double,   d, axpyf_zen_int_8 )

// dotxf (intrinsics)
DOTXF_KER_PROT( float,    s, dotxf_zen_int_8 )
DOTXF_KER_PROT( double,   d, dotxf_zen_int_8 )

// -- level-3 --

// gemm (asm d6x8)
GEMM_UKR_PROT( float,    s, gemm_zen_asm_6x16 )
GEMM_UKR_PROT( double,   d, gemm_zen_asm_6x8 )
GEMM_UKR_PROT( scomplex, c, gemm_zen_asm_3x8 )
GEMM_UKR_PROT( dcomplex, z, gemm_zen_asm_3x4 )

// gemm (asm d8x6)
GEMM_UKR_PROT( float,    s, gemm_zen_asm_16x6 )
GEMM_UKR_PROT( double,   d, gemm_zen_asm_8x6 )
GEMM_UKR_PROT( scomplex, c, gemm_zen_asm_8x3 )
GEMM_UKR_PROT( dcomplex, z, gemm_zen_asm_4x3 )

// gemmtrsm_l (asm d6x8)
GEMMTRSM_UKR_PROT( float,    s, gemmtrsm_l_zen_asm_6x16 )
GEMMTRSM_UKR_PROT( double,   d, gemmtrsm_l_zen_asm_6x8 )

// gemmtrsm_u (asm d6x8)
GEMMTRSM_UKR_PROT( float,    s, gemmtrsm_u_zen_asm_6x16 )
GEMMTRSM_UKR_PROT( double,   d, gemmtrsm_u_zen_asm_6x8 )


// gemm (asm d8x6)
//GEMM_UKR_PROT( float,    s, gemm_zen_asm_16x6 )
//GEMM_UKR_PROT( double,   d, gemm_zen_asm_8x6 )
//GEMM_UKR_PROT( scomplex, c, gemm_zen_asm_8x3 )
//GEMM_UKR_PROT( dcomplex, z, gemm_zen_asm_4x3 )

