//----- (00000001400D9550) ----------------------------------------------------
__int64 __fastcall sub_1400D9550(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rbx
	__int64 v3; // rcx

	v1 = sub_1400D66A0(a1, 1u);
	v2 = v1;
	if (v1)
	{
		v3 = *(_QWORD*)(v1 + 448);
		if (v3)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
			*(_QWORD*)(v2 + 448) = 0i64;
		}
	}
	return 0i64;
}

