//----- (0000000140420CC0) ----------------------------------------------------
int* __fastcall sub_140420CC0(__int64 a1, _QWORD* a2, unsigned int a3, _QWORD* a4)
{
	__int64 v5; // rax
	__int64 v6; // rcx
	int** v7; // rbx
	int* result; // rax

	v5 = sub_140056AB0(a2, a3);
	if (v5)
		v6 = *(_QWORD*)(v5 + 8);
	else
		v6 = 0i64;
	*a4 += 8i64;
	v7 = *(int***)(*a4 - 8i64);
	result = sub_1403A8810(qword_140C65898, *(_DWORD*)(v6 + 8), *(_DWORD*)(v6 + 12));
	*v7 = result;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

