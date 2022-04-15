//----- (0000000140661B90) ----------------------------------------------------
__int64 __fastcall sub_140661B90(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 result; // rax

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0)
	{
		v4 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v3 + 192));
		v5 = v4;
		if (v4 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v4 + 32i64))(v4) && *(_DWORD*)(v5 + 128) == 7)
		{
			return sub_140649930(a1, v5);
		}
		else
		{
			result = 1i64;
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

