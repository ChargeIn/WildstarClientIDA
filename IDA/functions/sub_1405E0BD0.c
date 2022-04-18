#include "../winhttp.h"

//----- (00000001405E0BD0) ----------------------------------------------------
__int64 __fastcall sub_1405E0BD0(__int64 a1, unsigned int* a2)
{
	unsigned int* v2; // r14
	__int64 v4; // rdi
	__int64 v5; // rcx
	__int64 v6; // rbx
	__int64 v7; // rax
	unsigned __int64 v8; // r15
	unsigned int v9; // ebx
	__int64 v10; // r12
	_QWORD* v11; // rdi
	__int64 v12; // rbp
	unsigned __int64 v13; // rsi
	_QWORD* v14; // rbx
	int* v15; // rax
	__int64 v16; // rsi
	unsigned __int64 v17; // rbp
	int** v18; // r14
	int* v19; // rax
	int* v20; // rcx
	unsigned __int64 v21; // rbp
	int** v22; // r14
	int* v23; // rax
	int* v24; // rcx
	__int64 v25; // rcx
	unsigned __int64 v26; // rbp
	int** v27; // r14
	int* v28; // rax
	int* v29; // rcx
	__int64 v30; // rbp
	__int64 v31; // rcx
	__int64 v32; // rbx
	__int64 v33; // rax
	__int64 v34; // rdx
	__int64 v35; // rdx
	__int64(__fastcall * *v37)(); // [rsp+20h] [rbp-78h] BYREF
	unsigned int v38; // [rsp+28h] [rbp-70h]
	__int64 v39; // [rsp+30h] [rbp-68h]
	int v40; // [rsp+38h] [rbp-60h]
	__int64(__fastcall * *v41)(); // [rsp+40h] [rbp-58h] BYREF
	int v42; // [rsp+48h] [rbp-50h]
	__int64 v43; // [rsp+50h] [rbp-48h]
	int v44; // [rsp+58h] [rbp-40h]
	unsigned __int64 v46; // [rsp+B0h] [rbp+18h]

	v2 = a2;
	if (*((_QWORD*)a2 + 1))
	{
		v4 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
		v37 = off_140B569F0;
		v5 = *(_QWORD*)(v4 + 32);
		v39 = v4;
		v40 = 1;
		if (*(_QWORD*)(v5 + 120) >= *(_QWORD*)(v5 + 112))
			sub_14005E2C0(v4);
		v6 = *(_QWORD*)(v4 + 16);
		v7 = sub_14005C1B0(v4, 0, 0);
		*(_DWORD*)(v6 + 8) = 5;
		*(_QWORD*)v6 = v7;
		*(_QWORD*)(v4 + 16) += 16i64;
		v8 = 0i64;
		v9 = sub_1400578C0(v4);
		v38 = v9;
		v46 = 0i64;
		if (*v2)
		{
			v10 = 0i64;
			v11 = (_QWORD*)(a1 + 400);
			do
			{
				v12 = v10 + *((_QWORD*)v2 + 1);
				v13 = (*(__int64(__fastcall**)(__int64))(a1 + 424))(v12);
				v14 = *(_QWORD**)(*(_QWORD*)(a1 + 416) + 8 * (v13 % *(_QWORD*)(a1 + 408)));
				if (!v14)
					goto LABEL_12;
				while (v13 != *v14 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 432))(v12, v14 + 2))
				{
					v14 = (_QWORD*)v14[1];
					if (!v14)
						goto LABEL_12;
				}
				if (v14 == (_QWORD*)-24i64)
				{
				LABEL_12:
					v15 = sub_14018B280(136i64, 0);
					if (v15)
						v16 = sub_1405DC130(
							(__int64)v15,
							(float*)(v10 + *((_QWORD*)v2 + 1)),
							(_QWORD*)(a1 + 632),
							(unsigned int)++ * (_DWORD*)(a1 + 648));
					else
						v16 = 0i64;
					if (*v11 == *(_QWORD*)(a1 + 408))
						sub_1400290D0(a1 + 400);
					v17 = (*(__int64(__fastcall**)(__int64))(a1 + 424))(v16 + 16);
					v18 = (int**)(*(_QWORD*)(a1 + 416) + 8 * (v17 % *(_QWORD*)(a1 + 408)));
					v19 = sub_14018B280(32i64, 0);
					if (v19)
					{
						v20 = *v18;
						*(_QWORD*)v19 = v17;
						*((_QWORD*)v19 + 1) = v20;
						LODWORD(v20) = *(_DWORD*)(v16 + 16);
						*((_QWORD*)v19 + 3) = v16;
						v19[4] = (int)v20;
					}
					*v18 = v19;
					++* v11;
					if (*(_QWORD*)(a1 + 440) == *(_QWORD*)(a1 + 448))
						sub_1400290D0(a1 + 440);
					v21 = (*(__int64(__fastcall**)(__int64))(a1 + 464))(v16 + 24);
					v22 = (int**)(*(_QWORD*)(a1 + 456) + 8 * (v21 % *(_QWORD*)(a1 + 448)));
					v23 = sub_14018B280(32i64, 0);
					if (v23)
					{
						v24 = *v22;
						*(_QWORD*)v23 = v21;
						*((_QWORD*)v23 + 1) = v24;
						v25 = *(_QWORD*)(v16 + 24);
						*((_QWORD*)v23 + 3) = v16;
						*((_QWORD*)v23 + 2) = v25;
					}
					*v22 = v23;
					++* (_QWORD*)(a1 + 440);
					if (*(_QWORD*)(a1 + 360) == *(_QWORD*)(a1 + 368))
						sub_1400290D0(a1 + 360);
					v26 = (*(__int64(__fastcall**)(__int64))(a1 + 384))(v16);
					v27 = (int**)(*(_QWORD*)(a1 + 376) + 8 * (v26 % *(_QWORD*)(a1 + 368)));
					v28 = sub_14018B280(32i64, 0);
					if (v28)
					{
						v29 = *v27;
						*(_QWORD*)v28 = v26;
						*((_QWORD*)v28 + 1) = v29;
						LODWORD(v29) = *(_DWORD*)v16;
						*((_QWORD*)v28 + 3) = v16;
						v28[4] = (int)v29;
					}
					*v27 = v28;
					++* (_QWORD*)(a1 + 360);
					v2 = a2;
					sub_1405DCBE0(
						(unsigned int*)v16,
						*(_DWORD*)(v10 + *((_QWORD*)a2 + 1) + 52),
						*(_QWORD*)(v10 + *((_QWORD*)a2 + 1) + 56));
					v44 = 1;
					v30 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
					v41 = off_140B569F0;
					v31 = *(_QWORD*)(v30 + 32);
					v43 = v30;
					if (*(_QWORD*)(v31 + 120) >= *(_QWORD*)(v31 + 112))
						sub_14005E2C0(v30);
					v32 = *(_QWORD*)(v30 + 16);
					v33 = sub_14005C1B0(v30, 0, 0);
					*(_DWORD*)(v32 + 8) = 5;
					*(_QWORD*)v32 = v33;
					*(_QWORD*)(v30 + 16) += 16i64;
					LODWORD(v32) = sub_1400578C0(v30);
					v42 = v32;
					sub_1405DC440(v16, (__int64)&v41);
					sub_1400FB1D0((__int64)&v37);
					sub_1400579E0(v30, v34, v32);
					v8 = v46;
				}
				++v8;
				v10 += 64i64;
				v46 = v8;
			} while (v8 < *v2);
			v4 = v39;
			v9 = v38;
		}
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipAccountFriendsRecieved", byte_1409EAB44, v9, v37);
		if (v4)
			sub_1400579E0(v4, v35, v9);
	}
	return 0i64;
}
// 1405E0EDA: variable 'v34' is possibly undefined
// 1405E0F51: variable 'v35' is possibly undefined
// 1409EAB44: using guessed type _BYTE byte_1409EAB44[24];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

