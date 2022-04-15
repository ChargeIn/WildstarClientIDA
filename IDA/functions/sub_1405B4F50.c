//----- (00000001405B4F50) ----------------------------------------------------
__int64 __fastcall sub_1405B4F50(__int64 a1, unsigned int a2)
{
	int v3; // edx
	__int64 v4; // rdx
	__int64 v5; // rcx
	__int64 result; // rax
	_QWORD* v7; // rcx
	__int64 v8; // rcx
	__int64* v9; // rdx

	sub_1407137C0(a1 + 3904, a1, a2);
	v3 = *(_DWORD*)(a1 + 3888);
	if (v3 || (v3 = *(_DWORD*)(a1 + 3904)) != 0)
	{
		v4 = sub_1403D90D0(qword_140C65898, v3);
		*(_DWORD*)(a1 + 3872) = v4 != 0;
	}
	else
	{
		v4 = 0i64;
		*(_DWORD*)(a1 + 3872) = 1;
	}
	v5 = *(_QWORD*)(a1 + 3840);
	result = v4 != v5;
	*(_DWORD*)(a1 + 3876) = result;
	if (v4 != v5)
	{
		if (v5)
		{
			v7 = *(_QWORD**)(a1 + 3856);
			if (v7)
			{
				result = *(_QWORD*)(a1 + 3864);
				*v7 = result;
			}
			v8 = *(_QWORD*)(a1 + 3864);
			if (v8)
			{
				result = *(_QWORD*)(a1 + 3856);
				*(_QWORD*)(v8 + 3856) = result;
			}
			*(_QWORD*)(a1 + 3856) = 0i64;
			*(_QWORD*)(a1 + 3864) = 0i64;
		}
		*(_QWORD*)(a1 + 3840) = v4;
		if (v4)
		{
			v9 = (__int64*)(v4 + 3848);
			if (!*(_QWORD*)(a1 + 3856))
			{
				*(_QWORD*)(a1 + 3856) = v9;
				*(_QWORD*)(a1 + 3864) = *v9;
				*v9 = a1;
				result = *(_QWORD*)(a1 + 3864);
				if (result)
					*(_QWORD*)(result + 3856) = a1 + 3864;
			}
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

