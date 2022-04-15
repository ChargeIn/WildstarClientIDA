//----- (00000001406C3800) ----------------------------------------------------
__int64 __fastcall sub_1406C3800(_QWORD* a1)
{
	__int64 v2; // rbx
	__int64 v3; // rcx
	__int128 v4; // xmm0
	__int128 v6; // [rsp+20h] [rbp-18h] BYREF

	v2 = sub_1406C3560(a1);
	if (v2 && sub_1400F0960(a1, 2u, (float*)&v6))
	{
		v3 = *(_QWORD*)(v2 + 1072);
		if (v3)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
			*(_QWORD*)(v2 + 1072) = 0i64;
		}
		v4 = v6;
		*(_BYTE*)(v2 + 1084) = 0;
		*(_OWORD*)(v2 + 1024) = v4;
		sub_1406C2FC0(v2, 0);
	}
	return 0i64;
}
// 1406C3800: using guessed type __int128 var_18;

