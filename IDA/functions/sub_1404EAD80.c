//----- (00000001404EAD80) ----------------------------------------------------
__int64 __fastcall sub_1404EAD80(__int64 a1)
{
	int* v1; // r8
	int v2; // eax

	v1 = *(int**)(a1 + 16);
	v2 = *(_DWORD*)(*(_QWORD*)(qword_140C635F0 + 5864) + 4i64);
	v1[2] = 1;
	*v1 = v2 & 1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

