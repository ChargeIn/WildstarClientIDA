//----- (00000001404F8F60) ----------------------------------------------------
__int64 __fastcall sub_1404F8F60(_QWORD* a1)
{
	__int64 v2; // rax
	BOOL v3; // esi
	__int64 v4; // rcx
	__int64 v5; // rbx
	__int64 v6; // rcx
	int v7; // ebx
	_DWORD* v8; // rcx
	__int64 result; // rax

	v2 = sub_1404F87C0(a1, 1u);
	v3 = 1;
	v4 = *(_QWORD*)(v2 + 2328);
	v5 = v2;
	if (v4 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4) > 0)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v5 + 2328) + 112i64))(*(_QWORD*)(v5 + 2328));
	v6 = *(_QWORD*)(v5 + 2168);
	v7 = 0;
	if (v6)
		v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 160i64))(v6) != 0;
	v8 = (_DWORD*)a1[2];
	LOBYTE(v7) = v3;
	v8[2] = 1;
	result = 1i64;
	*v8 = v7;
	a1[2] += 16i64;
	return result;
}

