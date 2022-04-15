//----- (000000014067DD40) ----------------------------------------------------
__int64 __fastcall sub_14067DD40(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 v4; // rax
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rcx
	__int16* v8; // rax
	unsigned __int64* v9; // rdx
	unsigned __int64 v10; // r8
	__int64 v12; // [rsp+20h] [rbp-28h] BYREF
	__int64 v13; // [rsp+28h] [rbp-20h]

	v2 = sub_14067B760(a1);
	v3 = v2;
	if (v2
		&& (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2) >= 2
		&& (v4 = *(_QWORD*)(v3 + 48), *(_DWORD*)(*(_QWORD*)v4 + 12i64) == 24)
		&& (v5 = sub_140220080(*(_DWORD*)(*(_QWORD*)v4 + 20i64))) != 0
		&& (v6 = sub_14024DB80(*(_DWORD*)(v5 + 4))) != 0)
	{
		v8 = sub_14034BDD0(v7, *(_DWORD*)(v6 + 4));
		v9 = (unsigned __int64*)sub_14018F0E0(&v12, (unsigned __int16*)v8)[1];
		if (v9)
		{
			v10 = -1i64;
			do
				++v10;
			while (*((_BYTE*)v9 + v10));
			sub_140058710((__int64)a1, v9, v10);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v13)
		{
			sub_14018B900(v13, 0);
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 14067DDA1: variable 'v7' is possibly undefined

