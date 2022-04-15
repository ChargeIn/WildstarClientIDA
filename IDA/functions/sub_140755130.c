//----- (0000000140755130) ----------------------------------------------------
__int64 __fastcall sub_140755130(__int64 a1)
{
	_DWORD* v2; // rdx
	__int64 result; // rax
	__int64 v4; // rcx
	_DWORD* v5; // rax
	int v6; // eax
	_DWORD* v7; // rcx
	bool v8; // zf

	if (qword_140C65898)
	{
		v4 = *(_QWORD*)(qword_140C65898 + 29064);
		if (v4)
		{
			v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 72i64))(v4);
			v7 = *(_DWORD**)(a1 + 16);
			v8 = v6 == 0;
			v7[2] = 1;
			result = 1i64;
			*v7 = !v8;
			*(_QWORD*)(a1 + 16) += 16i64;
		}
		else
		{
			v5 = *(_DWORD**)(a1 + 16);
			*v5 = 0;
			v5[2] = 1;
			*(_QWORD*)(a1 + 16) += 16i64;
			return 1i64;
		}
	}
	else
	{
		v2 = *(_DWORD**)(a1 + 16);
		result = 1i64;
		*v2 = 0;
		v2[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

