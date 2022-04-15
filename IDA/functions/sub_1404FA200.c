//----- (00000001404FA200) ----------------------------------------------------
__int64 __fastcall sub_1404FA200(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rcx
	__int64 v5; // rbx
	unsigned int v6; // eax

	v2 = sub_1404F87C0(a1, 1u);
	v3 = v2;
	if (v2)
	{
		v4 = *(_QWORD*)(v2 + 2328);
		if (v4 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4) > 0)
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 2328) + 112i64))(*(_QWORD*)(v3 + 2328));
		v5 = *(_QWORD*)(v3 + 2168);
		if (v5)
		{
			v6 = sub_140056D60(a1, 2u);
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v5 + 88i64))(v5, v6, 0i64, 0i64);
		}
	}
	return 0i64;
}

