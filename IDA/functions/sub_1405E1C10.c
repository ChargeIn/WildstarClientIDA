#include "../winhttp.h"

//----- (00000001405E1C10) ----------------------------------------------------
__int64 __fastcall sub_1405E1C10(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	__int64 v3; // r14
	__int64 v4; // r8
	unsigned __int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	unsigned __int64 v9; // r13
	unsigned int v10; // ebx
	__int64 v11; // r12
	_QWORD* v12; // rdi
	__int64 v13; // rbp
	unsigned __int64 v14; // rsi
	_QWORD* v15; // rbx
	int* v16; // rax
	__int64 v17; // rsi
	unsigned __int64 v18; // rbp
	int** v19; // r14
	int* v20; // rax
	int* v21; // rcx
	__int64 v22; // rcx
	unsigned __int64 v23; // rbp
	int** v24; // r14
	int* v25; // rax
	int* v26; // rcx
	__int64 v27; // rcx
	__int64 v28; // rbp
	__int64 v29; // rcx
	__int64 v30; // rbx
	__int64 v31; // rax
	__int64 v32; // rdx
	__int64 v33; // rdx
	__int64(__fastcall * *v35)(); // [rsp+20h] [rbp-68h] BYREF
	unsigned int v36; // [rsp+28h] [rbp-60h]
	__int64 v37; // [rsp+30h] [rbp-58h]
	int v38; // [rsp+38h] [rbp-50h]
	__int64(__fastcall * *v39)(); // [rsp+40h] [rbp-48h] BYREF
	int v40; // [rsp+48h] [rbp-40h]
	__int64 v41; // [rsp+50h] [rbp-38h]
	int v42; // [rsp+58h] [rbp-30h]

	v2 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
	v35 = off_140B569F0;
	v3 = a2;
	v4 = *(_QWORD*)(v2 + 32);
	v38 = 1;
	v6 = *(_QWORD*)(v4 + 112);
	v37 = v2;
	if (*(_QWORD*)(v4 + 120) >= v6)
		sub_14005E2C0(v2);
	v7 = *(_QWORD*)(v2 + 16);
	v8 = sub_14005C1B0(v2, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = v8;
	*(_QWORD*)(v2 + 16) += 16i64;
	v9 = 0i64;
	v10 = sub_1400578C0(v2);
	v36 = v10;
	if (*(_DWORD*)(v3 + 4))
	{
		v11 = 0i64;
		v12 = (_QWORD*)(a1 + 560);
		do
		{
			v13 = v11 + *(_QWORD*)(v3 + 8);
			v14 = (*(__int64(__fastcall**)(__int64))(a1 + 584))(v13);
			v15 = *(_QWORD**)(*(_QWORD*)(a1 + 576) + 8 * (v14 % *(_QWORD*)(a1 + 568)));
			if (!v15)
				goto LABEL_11;
			while (v14 != *v15 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 592))(v13, v15 + 2))
			{
				v15 = (_QWORD*)v15[1];
				if (!v15)
					goto LABEL_11;
			}
			if (v15 == (_QWORD*)-24i64)
			{
			LABEL_11:
				v16 = sub_14018B280(72i64, 0);
				if (v16)
					v17 = sub_1405DD0C0((__int64)v16, v11 + *(_QWORD*)(v3 + 8), (_QWORD*)(a1 + 640), ++ * (_DWORD*)(a1 + 648));
				else
					v17 = 0i64;
				if (*v12 == *(_QWORD*)(a1 + 568))
					sub_1400290D0(a1 + 560);
				v18 = (*(__int64(__fastcall**)(__int64))(a1 + 584))(v17 + 8);
				v19 = (int**)(*(_QWORD*)(a1 + 576) + 8 * (v18 % *(_QWORD*)(a1 + 568)));
				v20 = sub_14018B280(32i64, 0);
				if (v20)
				{
					v21 = *v19;
					*(_QWORD*)v20 = v18;
					*((_QWORD*)v20 + 1) = v21;
					v22 = *(_QWORD*)(v17 + 8);
					*((_QWORD*)v20 + 3) = v17;
					*((_QWORD*)v20 + 2) = v22;
				}
				*v19 = v20;
				++* v12;
				if (*(_QWORD*)(a1 + 520) == *(_QWORD*)(a1 + 528))
					sub_1400290D0(a1 + 520);
				v23 = (*(__int64(__fastcall**)(__int64))(a1 + 544))(v17);
				v24 = (int**)(*(_QWORD*)(a1 + 536) + 8 * (v23 % *(_QWORD*)(a1 + 528)));
				v25 = sub_14018B280(32i64, 0);
				if (v25)
				{
					v26 = *v24;
					*(_QWORD*)v25 = v23;
					*((_QWORD*)v25 + 1) = v26;
					LODWORD(v26) = *(_DWORD*)v17;
					*((_QWORD*)v25 + 3) = v17;
					v25[4] = (int)v26;
				}
				*v24 = v25;
				++* (_QWORD*)(a1 + 520);
				v27 = *(_QWORD*)(qword_140C65898 + 29504);
				v42 = 1;
				v28 = *(_QWORD*)(v27 + 400);
				v39 = off_140B569F0;
				v29 = *(_QWORD*)(v28 + 32);
				v41 = v28;
				if (*(_QWORD*)(v29 + 120) >= *(_QWORD*)(v29 + 112))
					sub_14005E2C0(v28);
				v30 = *(_QWORD*)(v28 + 16);
				v31 = sub_14005C1B0(v28, 0, 0);
				*(_DWORD*)(v30 + 8) = 5;
				*(_QWORD*)v30 = v31;
				*(_QWORD*)(v28 + 16) += 16i64;
				LODWORD(v30) = sub_1400578C0(v28);
				v40 = v30;
				sub_1405DD250(v17, (__int64)&v39);
				sub_1400FB1D0((__int64)&v35);
				sub_1400579E0(v28, v32, v30);
				v3 = a2;
			}
			++v9;
			v11 += 40i64;
		} while (v9 < *(unsigned int*)(v3 + 4));
		v2 = v37;
		v10 = v36;
	}
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipAccountInvitesRecieved", byte_1409EABB4, v10, v35);
	if (v2)
		sub_1400579E0(v2, v33, v10);
	return 0i64;
}
// 1405E1E92: variable 'v32' is possibly undefined
// 1405E1F12: variable 'v33' is possibly undefined
// 1409EABB4: using guessed type _BYTE byte_1409EABB4[40];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

