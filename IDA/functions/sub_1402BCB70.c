#include "../winhttp.h"

//----- (00000001402BCB70) ----------------------------------------------------
__int64 __fastcall sub_1402BCB70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	unsigned int v7; // esi
	int v8; // edi
	__int64 result; // rax
	__int16* v10; // r8
	__int64 v11; // r9
	__int64 v12; // r10
	int v13; // eax
	int v14; // edx
	bool v15; // sf
	int v16; // edx
	int v17; // ecx
	int v18; // ecx
	int v19; // edx
	int v20; // edx
	int v21; // edx
	int v22; // edx
	int v23; // edx
	int v24; // edx
	__int64 v25; // rax
	__int64 v26; // rdi
	__int16* v27; // rcx
	__int64 v28; // rdx
	__int16 v29; // ax
	__int16 v30; // ax
	__int16* v31; // rcx
	__int16 v32; // ax
	__int16 v33; // ax
	unsigned int v34; // esi
	int v35; // edi
	__int16* v36; // r8
	__int64 v37; // r9
	__int64 v38; // r10
	int v39; // edx
	int v40; // edx
	int v41; // ecx
	int v42; // ecx
	int v43; // edx
	int v44; // edx
	int v45; // edx
	int v46; // edx
	int v47; // edx
	int v48; // edx
	__int64 v49; // rax
	__m128i v50[8]; // [rsp+20h] [rbp-E0h] BYREF
	_WORD v51[64]; // [rsp+A0h] [rbp-60h] BYREF
	__m128i v52[8]; // [rsp+120h] [rbp+20h] BYREF

	v7 = 0;
LABEL_2:
	v8 = 0;
	while (1)
	{
		result = sub_1402C0070(a2, v51, 0i64, 0);
		if ((int)result < 0)
			return result;
		sub_1402BCA70((__int64)v52, a4, (__int64)v51);
		sub_1402BD690(v50, v52);
		v10 = &v50[0].m128i_i16[2];
		v11 = 8 * (v7 + v8) + 2;
		v12 = 8i64;
		do
		{
			v13 = *(v10 - 2) + 128;
			if (v13 >= 0)
			{
				if (v13 > 255)
					LOBYTE(v13) = -1;
			}
			else
			{
				LOBYTE(v13) = 0;
			}
			v14 = *(v10 - 1);
			v15 = v14 + 128 < 0;
			v16 = v14 + 128;
			*(_BYTE*)((unsigned int)(v11 - 2) + a1) = v13;
			if (v15)
			{
				LOBYTE(v16) = 0;
			}
			else if (v16 > 255)
			{
				LOBYTE(v16) = -1;
			}
			v17 = *v10;
			v15 = v17 + 128 < 0;
			v18 = v17 + 128;
			*(_BYTE*)((unsigned int)(v11 - 1) + a1) = v16;
			if (v15)
			{
				LOBYTE(v18) = 0;
			}
			else if (v18 > 255)
			{
				LOBYTE(v18) = -1;
			}
			v19 = v10[1];
			*(_BYTE*)(v11 + a1) = v18;
			v20 = v19 + 128;
			if (v20 >= 0)
			{
				if (v20 > 255)
					LOBYTE(v20) = -1;
			}
			else
			{
				LOBYTE(v20) = 0;
			}
			*(_BYTE*)((unsigned int)(v11 + 1) + a1) = v20;
			v21 = v10[2] + 128;
			if (v21 >= 0)
			{
				if (v21 > 255)
					LOBYTE(v21) = -1;
			}
			else
			{
				LOBYTE(v21) = 0;
			}
			*(_BYTE*)((unsigned int)(v11 + 2) + a1) = v21;
			v22 = v10[3] + 128;
			if (v22 >= 0)
			{
				if (v22 > 255)
					LOBYTE(v22) = -1;
			}
			else
			{
				LOBYTE(v22) = 0;
			}
			*(_BYTE*)((unsigned int)(v11 + 3) + a1) = v22;
			v23 = v10[4] + 128;
			if (v23 >= 0)
			{
				if (v23 > 255)
					LOBYTE(v23) = -1;
			}
			else
			{
				LOBYTE(v23) = 0;
			}
			*(_BYTE*)((unsigned int)(v11 + 4) + a1) = v23;
			v24 = v10[5] + 128;
			if (v24 >= 0)
			{
				if (v24 > 255)
					LOBYTE(v24) = -1;
			}
			else
			{
				LOBYTE(v24) = 0;
			}
			v25 = (unsigned int)(v11 + 5);
			v10 += 8;
			v11 = (unsigned int)(v11 + 16);
			*(_BYTE*)(v25 + a1) = v24;
			--v12;
		} while (v12);
		if ((unsigned int)++v8 >= 2)
		{
			v7 += 16;
			if (v7 < 0x20)
				goto LABEL_2;
			result = sub_1402C0070(a2, v51, 1i64, 1);
			if ((int)result >= 0)
			{
				sub_1402BCA70((__int64)v52, a4 + 256, (__int64)v51);
				sub_1402BD690(v50, v52);
				v26 = 32i64;
				v27 = (__int16*)(a1 + 258);
				v28 = 32i64;
				do
				{
					v29 = *(__int16*)((char*)v27 + (_QWORD)v50 - a1 - 258);
					if (v29 >= -256)
					{
						if (v29 > 255)
							v29 = 255;
					}
					else
					{
						v29 = -256;
					}
					*(v27 - 1) = v29;
					v30 = *(__int16*)((char*)v27 + (_QWORD)&v50[-16] - a1);
					if (v30 >= -256)
					{
						if (v30 > 255)
							v30 = 255;
					}
					else
					{
						v30 = -256;
					}
					*v27 = v30;
					v27 += 2;
					--v28;
				} while (v28);
				result = sub_1402C0070(a2, v51, 2i64, 1);
				if ((int)result >= 0)
				{
					sub_1402BCA70((__int64)v52, a4 + 512, (__int64)v51);
					sub_1402BD690(v50, v52);
					v31 = (__int16*)(a1 + 386);
					do
					{
						v32 = *(__int16*)((char*)v31 + (_QWORD)v50 - a1 - 386);
						if (v32 >= -256)
						{
							if (v32 > 255)
								v32 = 255;
						}
						else
						{
							v32 = -256;
						}
						*(v31 - 1) = v32;
						v33 = *(__int16*)((char*)v31 + (_QWORD)&v50[-24] - a1);
						if (v33 >= -256)
						{
							if (v33 > 255)
								v33 = 255;
						}
						else
						{
							v33 = -256;
						}
						*v31 = v33;
						v31 += 2;
						--v26;
					} while (v26);
					v34 = 0;
				LABEL_63:
					v35 = 0;
					while (1)
					{
						result = sub_1402C0070(a2, v51, 3i64, 2);
						if ((int)result < 0)
							break;
						sub_1402BCA70((__int64)v52, a4 + 768, (__int64)v51);
						sub_1402BD690(v50, v52);
						v36 = &v50[0].m128i_i16[2];
						v37 = 8 * (v34 + v35) + 2;
						v38 = 8i64;
						do
						{
							v39 = *(v36 - 2) + 128;
							if (v39 >= 0)
							{
								if (v39 > 255)
									LOBYTE(v39) = -1;
							}
							else
							{
								LOBYTE(v39) = 0;
							}
							*(_BYTE*)((unsigned int)(v37 - 2) + a1 + 512) = v39;
							v40 = *(v36 - 1) + 128;
							if (v40 >= 0)
							{
								if (v40 > 255)
									LOBYTE(v40) = -1;
							}
							else
							{
								LOBYTE(v40) = 0;
							}
							v41 = *v36;
							v15 = v41 + 128 < 0;
							v42 = v41 + 128;
							*(_BYTE*)((unsigned int)(v37 - 1) + a1 + 512) = v40;
							if (v15)
							{
								LOBYTE(v42) = 0;
							}
							else if (v42 > 255)
							{
								LOBYTE(v42) = -1;
							}
							v43 = v36[1];
							*(_BYTE*)(v37 + a1 + 512) = v42;
							v44 = v43 + 128;
							if (v44 >= 0)
							{
								if (v44 > 255)
									LOBYTE(v44) = -1;
							}
							else
							{
								LOBYTE(v44) = 0;
							}
							*(_BYTE*)((unsigned int)(v37 + 1) + a1 + 512) = v44;
							v45 = v36[2] + 128;
							if (v45 >= 0)
							{
								if (v45 > 255)
									LOBYTE(v45) = -1;
							}
							else
							{
								LOBYTE(v45) = 0;
							}
							*(_BYTE*)((unsigned int)(v37 + 2) + a1 + 512) = v45;
							v46 = v36[3] + 128;
							if (v46 >= 0)
							{
								if (v46 > 255)
									LOBYTE(v46) = -1;
							}
							else
							{
								LOBYTE(v46) = 0;
							}
							*(_BYTE*)((unsigned int)(v37 + 3) + a1 + 512) = v46;
							v47 = v36[4] + 128;
							if (v47 >= 0)
							{
								if (v47 > 255)
									LOBYTE(v47) = -1;
							}
							else
							{
								LOBYTE(v47) = 0;
							}
							*(_BYTE*)((unsigned int)(v37 + 4) + a1 + 512) = v47;
							v48 = v36[5] + 128;
							if (v48 >= 0)
							{
								if (v48 > 255)
									LOBYTE(v48) = -1;
							}
							else
							{
								LOBYTE(v48) = 0;
							}
							v49 = (unsigned int)(v37 + 5);
							v36 += 8;
							v37 = (unsigned int)(v37 + 16);
							*(_BYTE*)(v49 + a1 + 512) = v48;
							--v38;
						} while (v38);
						if ((unsigned int)++v35 >= 2)
						{
							v34 += 16;
							if (v34 < 0x20)
								goto LABEL_63;
							return 0i64;
						}
					}
				}
			}
			return result;
		}
	}
}
// 1402BCB70: using guessed type _WORD var_140[64];
// 1402BCB70: using guessed type __m128i var_C0[8];

