//----- (00000001400FCBA0) ----------------------------------------------------
__int64 __fastcall sub_1400FCBA0(__int64 a1)
{
	__int64 result; // rax
	_QWORD* v3; // rax
	__int64 v4; // r10
	__int64 v5; // rdx
	_QWORD* v6; // rax
	__int64 v7; // r10
	__int64 v8; // rdx
	__int64 v9; // rdi

	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 8i64))(a1);
	if ((_DWORD)result)
	{
		v3 = sub_14005C3C0(
			*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 16i64) + 32i64) + 160i64),
			*(_DWORD*)(*(_QWORD*)(a1 + 24) + 8i64));
		v5 = *(_QWORD*)(v4 + 16);
		*(_QWORD*)v5 = *v3;
		*(_DWORD*)(v5 + 8) = *((_DWORD*)v3 + 2);
		*(_QWORD*)(v4 + 16) += 16i64;
		v6 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
		v8 = *(_QWORD*)(v7 + 16);
		*(_QWORD*)v8 = *v6;
		*(_DWORD*)(v8 + 8) = *((_DWORD*)v6 + 2);
		*(_QWORD*)(v7 + 16) += 16i64;
		v9 = *(_QWORD*)(a1 + 16);
		if ((unsigned int)sub_14005BA70(v9, *(_QWORD*)(*(_QWORD*)(v9 + 16) - 32i64), *(_QWORD*)(v9 + 16) - 16i64))
		{
			*(_QWORD*)(v9 + 16) += 16i64;
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 48i64;
			return 1i64;
		}
		else
		{
			*(_QWORD*)(v9 + 16) -= 16i64;
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
			return 0i64;
		}
	}
	return result;
}
// 1400FCBD9: variable 'v4' is possibly undefined
// 1400FCC05: variable 'v7' is possibly undefined

