//----- (00000001405729B0) ----------------------------------------------------
__int64 __fastcall sub_1405729B0(__int64 a1, __int64 a2)
{
	int* v4; // rax
	int* v5; // rax

	*(_QWORD*)a1 = off_140B6C8F8;
	v4 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 16) = v4;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_BYTE*)v4 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 24i64) = *(_QWORD*)(a1 + 16);
	v5 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 48) = v5;
	*(_BYTE*)v5 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 48) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 48) + 16i64) = *(_QWORD*)(a1 + 48);
	*(_QWORD*)(*(_QWORD*)(a1 + 48) + 24i64) = *(_QWORD*)(a1 + 48);
	*(_QWORD*)(a1 + 72) = a2;
	*(_DWORD*)(a1 + 80) = 0;
	return a1;
}
// 140B6C8F8: using guessed type __int64 (__fastcall *off_140B6C8F8[10])();

