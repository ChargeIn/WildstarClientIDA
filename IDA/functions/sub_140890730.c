//----- (0000000140890730) ----------------------------------------------------
bool __fastcall sub_140890730(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rbx
	__int64 v5; // rax
	int v6; // eax
	__int64 v7; // rcx
	__int64 v8; // rcx

	v2 = (_QWORD*)(a1 + 264);
	if (!*(_QWORD*)(*(_QWORD*)(a1 + 264) + 24i64))
		return 0;
	v5 = sub_1408904A0(a1, 0);
	v6 = sub_14088FAE0(v2, a2 - v5);
	v7 = *(_QWORD*)(*v2 + 24i64);
	if (v7)
		v8 = *(_QWORD*)(v7 + 128);
	else
		v8 = 0i64;
	return v6 == (unsigned int)sub_140891630(v8);
}

