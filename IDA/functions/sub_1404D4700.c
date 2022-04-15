//----- (00000001404D4700) ----------------------------------------------------
__int64 __fastcall sub_1404D4700(__int64 a1, __int64 a2, __int64 a3)
{
	int v3; // eax
	int* v5; // rax

	*(_DWORD*)(a1 + 8) = 10;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 48) = a2;
	*(_QWORD*)a1 = off_140B69058;
	v3 = *(_DWORD*)(a3 + 20);
	*(_QWORD*)(a1 + 60) = 0i64;
	*(_DWORD*)(a1 + 56) = v3;
	v5 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 80) = v5;
	*(_BYTE*)v5 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 80) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 80) + 16i64) = *(_QWORD*)(a1 + 80);
	*(_QWORD*)(*(_QWORD*)(a1 + 80) + 24i64) = *(_QWORD*)(a1 + 80);
	return a1;
}
// 140B69058: using guessed type __int64 (__fastcall *off_140B69058[16])();

