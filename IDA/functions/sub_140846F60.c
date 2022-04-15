#include "../winhttp.h"

//----- (0000000140846F60) ----------------------------------------------------
__int64 __fastcall sub_140846F60(__int64 a1)
{
	int v1; // r9d
	__int64 v2; // rbx
	_QWORD* v3; // r13
	_QWORD* v5; // rdi
	int v6; // eax
	unsigned __int8 v7; // si
	__int64* v8; // r15
	unsigned int v9; // r14d
	__int64 v10; // rax
	__int64 v11; // r9
	_QWORD* v12; // rax
	__int64 v13; // rbx
	int v14; // edi
	__int64 v15; // rcx
	__int64 v16; // rax
	int v17; // edx
	__int64 result; // rax
	int v19; // edx
	unsigned int v20; // ebx
	__int64 v21[2]; // [rsp+30h] [rbp-39h] BYREF
	__int64 v22[16]; // [rsp+40h] [rbp-29h]
	__int64 v23; // [rsp+D0h] [rbp+67h] BYREF
	__int64 v24; // [rsp+D8h] [rbp+6Fh] BYREF
	char v25; // [rsp+E0h] [rbp+77h] BYREF
	char v26; // [rsp+E4h] [rbp+7Bh]
	char v27; // [rsp+E5h] [rbp+7Ch]
	_QWORD* v28; // [rsp+E8h] [rbp+7Fh]

	v1 = *(_DWORD*)(a1 + 472);
	v2 = a1 + 480;
	v3 = *(_QWORD**)(*(_QWORD*)(a1 + 16) + 24i64);
	v22[0] = *(_QWORD*)(a1 + 16);
	v24 = v3[24];
	v5 = (_QWORD*)v3[20];
	v28 = v5;
	sub_140861990(a1 + 480, (__int64)&v24, (__int64)v3, v1);
	v6 = *(_DWORD*)(a1 + 472);
	v22[1] = v2;
	LODWORD(v24) = v6;
	v7 = 2;
	v8 = (__int64*)(a1 + 928);
	v9 = 0;
	while (1)
	{
		v10 = *v5;
		v11 = v3[22];
		v21[0] = 0i64;
		(*(void(__fastcall**)(_QWORD*, _QWORD, __int64*, __int64))(v10 + 448))(v5, v9, v21, v11);
		if (v21[0])
			break;
	LABEL_20:
		++v9;
		++v8;
		if (v9 >= 4)
		{
			v17 = HIDWORD(v24) & 0x3FFFF;
			*(_DWORD*)(a1 + 476) = HIDWORD(v24) & 0x3FFFF;
			result = sub_140871CB0(a1 + 720, v17, 0);
			if ((_DWORD)result == 1)
			{
				v19 = *(_DWORD*)(a1 + 476);
				v22[v7] = a1 + 704;
				result = sub_140871CB0(a1 + 976, v19, 0);
				v20 = result;
				if ((_DWORD)result == 1)
				{
					for (; v7; --v7)
						(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v22[v7] + 56i64))(v22[v7], v21[v7 + 1]);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 96i64))(a1);
					return v20;
				}
			}
			return result;
		}
	}
	v23 = 0i64;
	if ((unsigned int)sub_14082FAF0((__int64)&off_140C10F70, *(_DWORD*)(v21[0] + 32), &v23) != 1)
	{
	LABEL_4:
		if (v21[0])
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v21[0] + 16i64))(v21[0]);
			v21[0] = 0i64;
		}
		goto LABEL_20;
	}
	(*(void(__fastcall**)(__int64, char*))(*(_QWORD*)v23 + 24i64))(v23, &v25);
	if (v27)
	{
		(*(void(__fastcall**)(__int64, __int64(__fastcall***)()))(*(_QWORD*)v23 + 8i64))(v23, &off_140C10F70);
		goto LABEL_4;
	}
	if (v26)
	{
		v12 = (_QWORD*)sub_1408819F0(dword_140C10F28, 72i64);
		v13 = (__int64)v12;
		if (!v12)
			goto LABEL_27;
		v12[1] = 0i64;
		*v12 = off_1409A3140;
	}
	else
	{
		v13 = sub_1408819F0(dword_140C10F28, 216i64);
		if (!v13)
			goto LABEL_27;
		*(_QWORD*)v13 = off_1409A31C0;
		*(_QWORD*)(v13 + 8) = 0i64;
		*(_QWORD*)(v13 + 72) = 0i64;
		*(_WORD*)(v13 + 96) = 0;
		*(_QWORD*)(v13 + 104) = 0i64;
		*(_QWORD*)(v13 + 128) = 0i64;
		*(_WORD*)(v13 + 152) = 0;
		*(_QWORD*)(v13 + 160) = 0i64;
	}
	if (v13)
	{
		if ((*(unsigned int(__fastcall**)(__int64, __int64, __int64*, _QWORD, _QWORD*, __int64*))(*(_QWORD*)v13
			+ 64i64))(
				v13,
				v23,
				v21,
				v9,
				v3,
				&v24) == 1)
		{
			v15 = v21[0];
			v16 = v7++;
			*v8 = v13;
			v22[v16] = v13;
			if (v15)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 16i64))(v15);
				v21[0] = 0i64;
			}
		}
		else
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 72i64))(v13);
			v14 = dword_140C10F28;
			(**(void(__fastcall***)(__int64, _QWORD))v13)(v13, 0i64);
			sub_140881720(v14, v13);
			if (v21[0])
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v21[0] + 16i64))(v21[0]);
				v5 = v28;
				v21[0] = 0i64;
			}
			else
			{
				v5 = v28;
			}
		}
		goto LABEL_20;
	}
LABEL_27:
	(*(void(__fastcall**)(__int64, __int64(__fastcall***)()))(*(_QWORD*)v23 + 8i64))(v23, &off_140C10F70);
	if (v21[0])
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v21[0] + 16i64))(v21[0]);
	return 2i64;
}
// 1409A3140: using guessed type __int64 (__fastcall *off_1409A3140[8])();
// 1409A31C0: using guessed type __int64 (__fastcall *off_1409A31C0[8])();
// 140C10F28: using guessed type int dword_140C10F28;
// 140C10F70: using guessed type __int64 (__fastcall **off_140C10F70)();

