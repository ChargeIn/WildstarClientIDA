//----- (00000001405F0010) ----------------------------------------------------
_QWORD* __fastcall sub_1405F0010(_QWORD* a1)
{
	int* v2; // rax

	sub_1405F75B0((__int64)a1);
	*a1 = &off_140B6ED20;
	v2 = sub_14018B280(40i64, 0);
	a1[20] = v2;
	a1[21] = 0i64;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(a1[20] + 8i64) = 0i64;
	*(_QWORD*)(a1[20] + 16i64) = a1[20];
	*(_QWORD*)(a1[20] + 24i64) = a1[20];
	sub_1400522F0(a1 + 23);
	return a1;
}
// 140B6ED20: using guessed type __int64 (__fastcall *off_140B6ED20)();

