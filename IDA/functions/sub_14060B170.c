//----- (000000014060B170) ----------------------------------------------------
__int64 __fastcall sub_14060B170(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	int v4; // eax
	__int64 v5; // rax
	int v6; // eax
	__int64 result; // rax
	int v8; // ecx
	int v9; // ecx

	v2 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 8));
	v3 = v2;
	if (!v2
		|| (v4 = *(_DWORD*)(v2 + 128), v4 != 20)
		&& v4 != 23
		&& ((v5 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v3 + 688)), (v3 = v5) == 0)
			|| (v6 = *(_DWORD*)(v5 + 128), v6 != 20) && v6 != 23))
	{
		v3 = 0i64;
	}
	result = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 16));
	if (!result
		|| (v8 = *(_DWORD*)(result + 128), v8 != 20)
		&& v8 != 23
		&& ((result = sub_1403D90D0(qword_140C65898, *(_DWORD*)(result + 688))) == 0
			|| (v9 = *(_DWORD*)(result + 128), v9 != 20) && v9 != 23))
	{
		result = 0i64;
	}
	if (v3 || result)
		return 1i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

