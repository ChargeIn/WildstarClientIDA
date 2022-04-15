//----- (00000001404A1BE0) ----------------------------------------------------
__int64 __fastcall sub_1404A1BE0(__int64 a1)
{
	int* v2; // rax
	int* v3; // rax

	*(_QWORD*)a1 = off_140B67E20;
	*(_QWORD*)(a1 + 8) = 0i64;
	v2 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 24) = v2;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 24) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 24) + 16i64) = *(_QWORD*)(a1 + 24);
	*(_QWORD*)(*(_QWORD*)(a1 + 24) + 24i64) = *(_QWORD*)(a1 + 24);
	*(_DWORD*)(a1 + 48) = 0;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_DWORD*)(a1 + 64) = 296;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	v3 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 80) = v3;
	*(_QWORD*)(a1 + 88) = v3;
	*(_QWORD*)(a1 + 96) = v3 + 4;
	if (v3)
		*(_WORD*)v3 = 0;
	*(_DWORD*)(a1 + 108) = 0;
	sub_14001C480(a1 + 72, (int*)&word_140B7B704, (int*)&word_140B7B704);
	return a1;
}
// 140B67E20: using guessed type __int64 (__fastcall *off_140B67E20[3])();
// 140B7B704: using guessed type __int16 word_140B7B704;

