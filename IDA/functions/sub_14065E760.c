//----- (000000014065E760) ----------------------------------------------------
__int64 __fastcall sub_14065E760(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	unsigned int v5; // edx
	__int64 v6; // rax
	__int16* v8; // rax
	unsigned __int64* v9; // rdx
	unsigned __int64 v10; // r8
	__int64 v11; // [rsp+20h] [rbp-28h] BYREF
	__int64 v12; // [rsp+28h] [rbp-20h]

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2
		&& (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0
		&& (v4 = *(_QWORD*)(v3 + 24)) != 0
		&& (v5 = *(_DWORD*)(v4 + 116)) != 0)
	{
		v6 = sub_1404AF650(qword_140C659D0, v5);
		if (!v6)
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			*(_QWORD*)(a1 + 16) += 16i64;
			return 1i64;
		}
		v8 = sub_14034BDD0(**(_QWORD**)(v6 + 16), *(_DWORD*)(**(_QWORD**)(v6 + 16) + 4i64));
		v9 = (unsigned __int64*)sub_14018F0E0(&v11, (unsigned __int16*)v8)[1];
		if (v9)
		{
			v10 = -1i64;
			do
				++v10;
			while (*((_BYTE*)v9 + v10));
			sub_140058710(a1, v9, v10);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			*(_QWORD*)(a1 + 16) += 16i64;
		}
		if (v12)
		{
			sub_14018B900(v12, 0);
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659D0: using guessed type __int64 qword_140C659D0;

