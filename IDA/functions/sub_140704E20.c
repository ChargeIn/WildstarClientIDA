//----- (0000000140704E20) ----------------------------------------------------
__int64 __fastcall sub_140704E20(__int64 a1)
{
	int v2; // ebx
	__int64 v3; // rcx
	__int64 v4; // rcx
	int v5; // eax
	_DWORD* v6; // rcx
	bool v7; // zf
	__int64 result; // rax

	v2 = 0;
	v3 = *(_QWORD*)(qword_140C65898 + 120);
	if (v3)
		v4 = *(_QWORD*)(v3 + 5872);
	else
		v4 = 0i64;
	if (v4)
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 120i64))(v4);
	else
		v5 = 0;
	v6 = *(_DWORD**)(a1 + 16);
	v7 = v5 == 0;
	result = 1i64;
	LOBYTE(v2) = !v7;
	v6[2] = 1;
	*v6 = v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

