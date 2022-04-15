#include "../winhttp.h"

//----- (00000001401D6860) ----------------------------------------------------
__int64 __fastcall sub_1401D6860(__int64 a1, unsigned __int8* a2, __int64 a3)
{
	unsigned int v3; // r10d
	__int64 v4; // r13
	__int64 v5; // rbp
	int v6; // r12d
	unsigned int v7; // eax
	unsigned int v9; // r14d
	unsigned __int8* v10; // r11
	unsigned __int64 v11; // rdi
	unsigned int v12; // esi
	unsigned __int64 v13; // r15
	int v14; // edx
	unsigned int v16; // ecx
	unsigned int v17; // r10d
	__int64 v18; // r15
	__int64 v19; // rcx
	unsigned int v20; // edx
	int v21; // r8d
	unsigned int v22; // ecx
	unsigned int v23; // r12d
	unsigned __int64 v24; // rdx
	unsigned __int64 v25; // r8
	__int64 v26; // r9
	unsigned __int64 v27; // rcx
	unsigned int v28; // ebx
	int v29; // ebp
	unsigned int v30; // r9d
	int v31; // r8d
	int v32; // edx
	unsigned int v33; // ecx
	int v34; // r8d
	unsigned int v35; // r10d
	unsigned int v36; // eax
	__int64 v37; // rdx
	int v38; // r9d
	int v39; // ebp
	unsigned int v40; // ecx
	unsigned int v41; // r10d
	unsigned int v42; // r15d
	unsigned __int16* v43; // r8
	int v44; // r8d
	unsigned int v45; // r10d
	unsigned int v46; // ecx
	unsigned int v47; // r10d
	unsigned int v48; // ecx
	int v49; // r8d
	unsigned int v50; // r10d
	unsigned int v51; // ecx
	int v52; // r8d
	int v53; // edx
	unsigned int v54; // ecx
	__int64 v55; // rbx
	unsigned int v56; // esi
	unsigned __int16* v57; // rbx
	int v58; // edx
	unsigned int v59; // r10d
	unsigned int v60; // ecx
	__int64 v61; // rbx
	unsigned int v62; // edx
	int v63; // r8d
	unsigned int v64; // ecx
	unsigned int v65; // edx
	unsigned int v66; // r8d
	__int64 v67; // rbp
	int v68; // edx
	unsigned int v69; // ecx
	unsigned int v70; // r8d
	int v71; // r9d
	unsigned __int64 v72; // r8
	int v73; // r9d
	int v74; // edx
	unsigned int v75; // ecx

	v3 = *(_DWORD*)(a1 + 40);
	v4 = *(_QWORD*)(a1 + 16);
	v5 = *(unsigned int*)(a1 + 72);
	v6 = *(_DWORD*)(a1 + 64);
	v7 = *(_DWORD*)(a1 + 44);
	v9 = 1;
	v10 = a2;
	v11 = (unsigned __int64)&a2[a3];
	v12 = v6 & ((1 << *(_DWORD*)(a1 + 8)) - 1);
	v13 = v12 + (unsigned __int64)(unsigned int)(16 * v5);
	v14 = *(unsigned __int16*)(v4 + 2 * v13);
	if (v3 < 0x1000000)
	{
		if ((unsigned __int64)v10 >= v11)
			return 0i64;
		v3 <<= 8;
		v7 = *v10++ | (v7 << 8);
	}
	v16 = v14 * (v3 >> 11);
	if (v7 >= v16)
	{
		v34 = *(unsigned __int16*)(v4 + 2 * v5 + 384);
		v35 = v3 - v16;
		v36 = v7 - v16;
		v37 = v5;
		if (v35 < 0x1000000)
		{
			if ((unsigned __int64)v10 >= v11)
				return 0i64;
			v35 <<= 8;
			v36 = *v10++ | (v36 << 8);
		}
		v38 = 0;
		v39 = 3;
		v40 = v34 * (v35 >> 11);
		if (v36 < v40)
		{
			v41 = v34 * (v35 >> 11);
			v42 = 0;
			v43 = (unsigned __int16*)(v4 + 1636);
			v23 = 2;
		LABEL_61:
			v53 = *v43;
			if (v41 < 0x1000000)
			{
				if ((unsigned __int64)v10 >= v11)
					return 0i64;
				v41 <<= 8;
				v36 = *v10++ | (v36 << 8);
			}
			v54 = v53 * (v41 >> 11);
			if (v36 >= v54)
			{
				v59 = v41 - v54;
				v36 -= v54;
				if (v59 < 0x1000000)
				{
					if ((unsigned __int64)v10 >= v11)
						return 0i64;
					v59 <<= 8;
					v36 = *v10++ | (v36 << 8);
				}
				v58 = v43[1];
				v60 = v58 * (v59 >> 11);
				if (v36 >= v60)
				{
					v17 = v59 - v60;
					v57 = v43 + 258;
					v56 = 256;
					v36 -= v60;
					v38 = 16;
				}
				else
				{
					v61 = 8 * v12;
					v56 = 8;
					v17 = v58 * (v59 >> 11);
					v38 = 8;
					v57 = &v43[v61 + 130];
				}
			}
			else
			{
				v55 = 8 * v12;
				v17 = v53 * (v41 >> 11);
				v56 = 8;
				v57 = &v43[v55 + 2];
			}
			v62 = 1;
			do
			{
				if (v17 < 0x1000000)
				{
					if ((unsigned __int64)v10 >= v11)
						return 0i64;
					v17 <<= 8;
					v36 = *v10++ | (v36 << 8);
				}
				v63 = v57[v62];
				v64 = v63 * (v17 >> 11);
				if (v36 >= v64)
				{
					v17 -= v64;
					v62 = 2 * v62 + 1;
					v36 -= v64;
				}
				else
				{
					v17 = v63 * (v17 >> 11);
					v62 *= 2;
				}
			} while (v62 < v56);
			v65 = v38 - v56 + v62;
			if (v42 < 4)
			{
				v66 = 1;
				if (v65 < 4)
					v39 = v65;
				v67 = (unsigned int)(v39 << 6);
				do
				{
					if (v17 < 0x1000000)
					{
						if ((unsigned __int64)v10 >= v11)
							return 0i64;
						v17 <<= 8;
						v36 = *v10++ | (v36 << 8);
					}
					v68 = *(unsigned __int16*)(v4 + 2 * v67 + 2i64 * v66 + 864);
					v69 = v68 * (v17 >> 11);
					if (v36 >= v69)
					{
						v17 -= v69;
						v66 = 2 * v66 + 1;
						v36 -= v69;
					}
					else
					{
						v17 = v68 * (v17 >> 11);
						v66 *= 2;
					}
				} while (v66 < 0x40);
				v70 = v66 - 64;
				if (v70 >= 4)
				{
					v71 = (v70 >> 1) - 1;
					if (v70 < 0xE)
					{
						v72 = v4 + 1374 + 2 * (((v70 & 1 | 2) << v71) - (unsigned __int64)v70);
						goto LABEL_100;
					}
					v73 = (v70 >> 1) - 5;
					do
					{
						if (v17 < 0x1000000)
						{
							if ((unsigned __int64)v10 >= v11)
								return 0i64;
							v17 <<= 8;
							v36 = *v10++ | (v36 << 8);
						}
						v17 >>= 1;
						v36 -= v17 & (((v36 - v17) >> 31) - 1);
						--v73;
					} while (v73);
					v72 = v4 + 1604;
					v71 = 4;
					do
					{
					LABEL_100:
						if (v17 < 0x1000000)
						{
							if ((unsigned __int64)v10 >= v11)
								return 0i64;
							v17 <<= 8;
							v36 = *v10++ | (v36 << 8);
						}
						v74 = *(unsigned __int16*)(v72 + 2i64 * v9);
						v75 = v74 * (v17 >> 11);
						if (v36 >= v75)
						{
							v17 -= v75;
							v9 = 2 * v9 + 1;
							v36 -= v75;
						}
						else
						{
							v17 = v74 * (v17 >> 11);
							v9 *= 2;
						}
						--v71;
					} while (v71);
				}
			}
			goto LABEL_107;
		}
		v44 = *(unsigned __int16*)(v4 + 2 * v37 + 408);
		v45 = v35 - v40;
		v36 -= v40;
		v23 = 3;
		if (v45 < 0x1000000)
		{
			if ((unsigned __int64)v10 >= v11)
				return 0i64;
			v45 <<= 8;
			v36 = *v10++ | (v36 << 8);
		}
		v46 = v44 * (v45 >> 11);
		if (v36 < v46)
		{
			v47 = v44 * (v45 >> 11);
			if (v46 < 0x1000000)
			{
				if ((unsigned __int64)v10 >= v11)
					return 0i64;
				v47 = v46 << 8;
				v36 = *v10++ | (v36 << 8);
			}
			v48 = *(unsigned __int16*)(v4 + 2 * v13 + 480) * (v47 >> 11);
			if (v36 < v48)
			{
				if (v48 < 0x1000000 && (unsigned __int64)v10 >= v11)
					return 0i64;
				return 3i64;
			}
			goto LABEL_59;
		}
		v49 = *(unsigned __int16*)(v4 + 2 * v37 + 432);
		v50 = v45 - v46;
		v36 -= v46;
		if (v50 < 0x1000000)
		{
			if ((unsigned __int64)v10 >= v11)
				return 0i64;
			v50 <<= 8;
			v36 = *v10++ | (v36 << 8);
		}
		v51 = v49 * (v50 >> 11);
		if (v36 >= v51)
		{
			v47 = v50 - v51;
			v36 -= v51;
			if (v47 < 0x1000000)
			{
				if ((unsigned __int64)v10 >= v11)
					return 0i64;
				v47 <<= 8;
				v36 = *v10++ | (v36 << 8);
			}
			v52 = *(unsigned __int16*)(v4 + 2 * v37 + 456);
			v48 = v52 * (v47 >> 11);
			if (v36 >= v48)
			{
			LABEL_59:
				v41 = v47 - v48;
				v36 -= v48;
				goto LABEL_60;
			}
			v41 = v52 * (v47 >> 11);
		}
		else
		{
			v41 = v49 * (v50 >> 11);
		}
	LABEL_60:
		v42 = 12;
		v43 = (unsigned __int16*)(v4 + 2664);
		goto LABEL_61;
	}
	v17 = v14 * (v3 >> 11);
	v18 = v4 + 3692;
	if (*(_DWORD*)(a1 + 68) || v6)
	{
		v19 = *(_QWORD*)(a1 + 48);
		if (!v19)
			v19 = *(_QWORD*)(a1 + 56);
		v18 += 1536i64
			* (((v6 & ((1 << *(_DWORD*)(a1 + 4)) - 1)) << *(_DWORD*)a1)
				+ (*(unsigned __int8*)(*(_QWORD*)(a1 + 24) + v19 - 1) >> (8 - *(_DWORD*)a1)));
	}
	if ((unsigned int)v5 >= 7)
	{
		v24 = *(unsigned int*)(a1 + 76);
		v25 = *(_QWORD*)(a1 + 48);
		if (v25 >= v24)
			v26 = 0i64;
		else
			v26 = *(_QWORD*)(a1 + 56);
		v27 = *(_QWORD*)(a1 + 24) - v24;
		v28 = 256;
		v29 = *(unsigned __int8*)(v25 + v27 + v26);
		v30 = 1;
		do
		{
			v29 *= 2;
			v31 = v29 & v28;
			if (v17 < 0x1000000)
			{
				if ((unsigned __int64)v10 >= v11)
					return 0i64;
				v17 <<= 8;
				v7 = *v10++ | (v7 << 8);
			}
			v32 = *(unsigned __int16*)(v18 + 2 * (v28 + v30 + (unsigned __int64)(v29 & v28)));
			v33 = v32 * (v17 >> 11);
			if (v7 >= v33)
			{
				v17 -= v33;
				v30 = 2 * v30 + 1;
				v7 -= v33;
			}
			else
			{
				v17 = v32 * (v17 >> 11);
				v30 *= 2;
				v31 = ~v31;
			}
			v28 &= v31;
		} while (v30 < 0x100);
		v23 = 1;
	}
	else
	{
		v20 = 1;
		do
		{
			if (v17 < 0x1000000)
			{
				if ((unsigned __int64)v10 >= v11)
					return 0i64;
				v17 <<= 8;
				v7 = *v10++ | (v7 << 8);
			}
			v21 = *(unsigned __int16*)(v18 + 2i64 * v20);
			v22 = v21 * (v17 >> 11);
			if (v7 >= v22)
			{
				v17 -= v22;
				v20 = 2 * v20 + 1;
				v7 -= v22;
			}
			else
			{
				v17 = v21 * (v17 >> 11);
				v20 *= 2;
			}
		} while (v20 < 0x100);
		v23 = 1;
	}
LABEL_107:
	if (v17 < 0x1000000 && (unsigned __int64)v10 >= v11)
		return 0i64;
	return v23;
}

