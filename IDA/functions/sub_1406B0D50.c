//----- (00000001406B0D50) ----------------------------------------------------
__int64 __fastcall sub_1406B0D50(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned __int64 v4; // rdx
	__int64 v5; // rax
	__int64 result; // rax
	__int64 v7; // [rsp+38h] [rbp+10h] BYREF

	v2 = sub_140056AB0(a1, 1u);
	if (v2
		&& qword_140C659F0
		&& ((v4 = *(_QWORD*)(v2 + 16)) == 0 ? (v5 = sub_1404C9B90(v3, *(_DWORD*)(v2 + 8))) : (v5 = sub_1404B6E50(v3, v4)),
			v5))
	{
		v7 = 0i64;
		(*(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)v5 + 192i64))(v5, &v7);
		if (v7)
		{
			return sub_1406AE160(a1, *(_DWORD*)(v7 + 496));
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
// 1406B0D82: variable 'v3' is possibly undefined
// 140C659F0: using guessed type __int64 qword_140C659F0;

