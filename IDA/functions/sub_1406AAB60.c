//----- (00000001406AAB60) ----------------------------------------------------
__int64 __fastcall sub_1406AAB60(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rax
	__int64 result; // rax
	__int64 v6; // rcx

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && *(_QWORD*)(v2 + 8))
	{
		v3 = *(_QWORD*)(qword_140C659F8 + 200);
		if (v3 && (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 152i64))(v3))
		{
			v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 152i64))(v3);
			return sub_1406AE160(a1, *(_DWORD*)(v4 + 496));
		}
		else
		{
			return 0i64;
		}
	}
	else
	{
		v6 = a1[2];
		result = 1i64;
		*(_QWORD*)v6 = 0i64;
		*(_DWORD*)(v6 + 8) = 3;
		a1[2] += 16i64;
	}
	return result;
}
// 140C659F8: using guessed type __int64 qword_140C659F8;

