//----- (0000000140033D60) ----------------------------------------------------
__int64 __fastcall sub_140033D60(__int64 a1)
{
	int* v3; // rax
	int v4; // r8d
	unsigned int v5; // esi
	__int64 v6; // rbx
	int v7; // eax

	if (!*(_QWORD*)(a1 + 128))
		return sub_140033C40(a1);
	v3 = sub_14018B280(720i64, 0);
	v5 = 0;
	if (v3)
		v6 = sub_140020730((__int64)v3);
	else
		v6 = 0i64;
	v7 = sub_140020BC0(v6, *(void(__fastcall****)(_QWORD))(a1 + 128), v4);
	if (v7 < 0 || (v7 = sub_140048100(a1, v6, 1), v7 < 0))
		v5 = v7;
	else
		*(_DWORD*)(a1 + 96) = 1;
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
	return v5;
}
// 140033DB4: variable 'v4' is possibly undefined

