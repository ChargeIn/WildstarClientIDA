#include "../winhttp.h"

//----- (00000001405C0B80) ----------------------------------------------------
__int64 __fastcall sub_1405C0B80(__int64 a1, __int64 a2)
{
	int v2; // eax
	int v3; // ebx
	__int64 v6; // rcx
	__int64 v7; // rsi
	unsigned int v8; // ebx
	__int64 v9; // rax
	__int64 v10; // rbp
	int* v11; // rbx
	__int64 v12; // rax
	int v13; // edx
	__int16* v14; // rax
	__int64 v16; // [rsp+30h] [rbp-88h] BYREF
	_BYTE v17[24]; // [rsp+40h] [rbp-78h] BYREF
	int v18; // [rsp+58h] [rbp-60h]
	int v19; // [rsp+5Ch] [rbp-5Ch]
	__int64 v20; // [rsp+60h] [rbp-58h]
	int v21; // [rsp+68h] [rbp-50h] BYREF
	__int64 v22[3]; // [rsp+70h] [rbp-48h] BYREF
	int v23; // [rsp+88h] [rbp-30h]
	int v24; // [rsp+8Ch] [rbp-2Ch]
	__int64 v25; // [rsp+90h] [rbp-28h]

	v2 = *(_DWORD*)(a2 + 24);
	v3 = dword_140C636A8;
	memset(v17, 0, sizeof(v17));
	v18 = 0;
	v19 = dword_140C636A8;
	v20 = 0i64;
	v21 = v2;
	sub_1403B4F00(v22, (__int64)v17);
	v22[2] = 0i64;
	v23 = 0;
	v24 = v3;
	v25 = 0i64;
	sub_1405C4C10(a1 + 64, (__int64)&v16, &v21);
	v6 = v22[0];
	v7 = v16;
	if (v22[0])
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v22[0] - 16) + 8i64))(v22[0] - 16);
	v8 = 0;
	for (*(_QWORD*)(v7 + 48) = 0i64; v8 < *(_DWORD*)(a2 + 4); ++v8)
		sub_140003460((__int64*)(v7 + 40), (int*)(*(_QWORD*)(a2 + 8) + 4i64 * v8));
	*(_DWORD*)(v7 + 56) = *(_DWORD*)(a2 + 16);
	*(_DWORD*)(v7 + 64) = *(_DWORD*)(a2 + 20);
	*(_DWORD*)(v7 + 68) = dword_140C636A8 - *(_DWORD*)(a2 + 32);
	*(_DWORD*)(v7 + 72) = *(_DWORD*)(a2 + 36);
	*(_DWORD*)(v7 + 76) = *(_DWORD*)(a2 + 40);
	if (!*(_DWORD*)(v7 + 60))
	{
		if ((dword_140DC34C4 & 1) != 0)
		{
		LABEL_16:
			v10 = *(_QWORD*)(qword_140C65898 + 25744);
			if (!v10)
				goto LABEL_21;
			v11 = (int*)sub_140561C30(qword_140C65B70, *(_DWORD*)(v10 + 5632));
			if (v11)
				goto LABEL_22;
			v6 = qword_140C65898;
			if (*(_QWORD*)(qword_140C65898 + 120) != v10)
				goto LABEL_22;
			v12 = sub_14039DF50(qword_140C65898);
			if (v12)
				v11 = (int*)sub_1404695E0(v12);
			else
				LABEL_21:
			v11 = 0i64;
		LABEL_22:
			if (v11 && (*(unsigned int(__fastcall**)(int*))(*(_QWORD*)v11 + 8i64))(v11) == dword_140DC34C8)
				sub_14039CCE0(qword_140C65898, v11[23], 0xBu);
			*(_DWORD*)(a1 + 164) = 0;
			if (*(_DWORD*)(a2 + 28))
			{
				*(_DWORD*)(v7 + 64) |= 4u;
				v13 = 309339;
			}
			else
			{
				v13 = 309338;
			}
			v14 = sub_14034BDD0(v6, v13);
			sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v14, 0, 0i64);
			Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "MatchingJoinQueue", "i", *(unsigned int*)(a2 + 24));
			return 0i64;
		}
		dword_140DC34C4 |= 1u;
		if (qword_140C63840)
		{
			v9 = qword_140C63840(off_140A6A408, 838i64, qword_140C63858);
		}
		else
		{
			if (dword_140C638AC || (int)sub_1401FFFC0() < 0)
				goto LABEL_14;
			v9 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C64C58 + 24i64))(qword_140C64C58, 838i64);
		}
		if (v9)
		{
			v6 = *(unsigned int*)(v9 + 4);
		LABEL_15:
			dword_140DC34C8 = v6;
			goto LABEL_16;
		}
	LABEL_14:
		v6 = 0i64;
		goto LABEL_15;
	}
	return 0i64;
}
// 1405C0D91: variable 'v6' is possibly undefined
// 140A6A408: using guessed type wchar_t *off_140A6A408[2];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638AC: using guessed type int dword_140C638AC;
// 140C64C58: using guessed type __int64 qword_140C64C58;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140DC34C4: using guessed type int dword_140DC34C4;
// 140DC34C8: using guessed type int dword_140DC34C8;

