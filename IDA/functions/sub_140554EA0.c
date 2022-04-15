//----- (0000000140554EA0) ----------------------------------------------------
_BYTE* __fastcall sub_140554EA0(__int64 a1, int a2)
{
	__int64 v3; // rcx
	_DWORD* v4; // rax
	__int64 v5; // rcx
	_BYTE* result; // rax

	if (*(_DWORD*)(a1 + 4))
	{
		v3 = qword_140C65898;
		if (a2 && *(_DWORD*)(qword_140C65898 + 26180) == 37)
		{
			sub_1403A71F0(qword_140C65898, 0i64, 101i64, 1i64);
			v3 = qword_140C65898;
		}
		v4 = (_DWORD*)sub_1403D90D0(v3, *(_DWORD*)(a1 + 4));
		if (v4 && (v4[9] & 0x10000) == 0)
		{
			v4[956] = 3;
			v4[937] = 0;
			sub_140195D70((__int64)(v4 + 1418));
		}
	}
	v5 = *(_QWORD*)(a1 + 32);
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		*(_QWORD*)(a1 + 32) = 0i64;
	}
	*(_QWORD*)a1 = 0i64;
	*(_DWORD*)(a1 + 12) = 300;
	*(_DWORD*)(a1 + 16) = -1;
	*(_DWORD*)(a1 + 8) = 0;
	for (result = sub_140554F80((_QWORD*)a1);
		*(_QWORD*)(a1 + 128);
		result = (_BYTE*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 128) + 32i64))(*(_QWORD*)(a1 + 128)))
	{
		;
	}
	return result;
}
// 1403A71F0: using guessed type __int64 __fastcall sub_1403A71F0(_QWORD, _QWORD, _QWORD, _QWORD);
// 140C65898: using guessed type __int64 qword_140C65898;

