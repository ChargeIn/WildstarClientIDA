//----- (0000000140186660) ----------------------------------------------------
__int64 __fastcall sub_140186660(__int64 a1)
{
	int* v2; // rdi

	*(_QWORD*)a1 = off_140B5E490;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	v2 = sub_14018B280(2i64, 0);
	*(_QWORD*)(a1 + 16) = v2;
	*(_QWORD*)(a1 + 32) = (char*)v2 + 2;
	*(_QWORD*)(a1 + 24) = v2;
	sub_1407DB590(v2, &dword_1409E0EEC, 0i64);
	*(_QWORD*)(a1 + 24) = v2;
	if (v2)
		*(_WORD*)v2 = 0;
	*(_DWORD*)(a1 + 40) = 0;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_QWORD*)(a1 + 160) = 0i64;
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_QWORD*)(a1 + 184) = 0i64;
	*(_QWORD*)(a1 + 192) = 0i64;
	*(_QWORD*)(a1 + 200) = 0i64;
	return a1;
}
// 1409E0EEC: using guessed type int dword_1409E0EEC;
// 140B5E490: using guessed type __int64 (__fastcall *off_140B5E490[7])();

