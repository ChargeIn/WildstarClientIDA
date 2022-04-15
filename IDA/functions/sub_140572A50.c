//----- (0000000140572A50) ----------------------------------------------------
__int64 __fastcall sub_140572A50(__int64 a1, int a2)
{
	int* v4; // rax
	int* v5; // rax
	__int64 v6; // rcx
	_DWORD* v7; // rax

	*(_QWORD*)a1 = &off_140B6C8D8;
	v4 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 64) = v4;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_BYTE*)v4 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 64) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 64) + 16i64) = *(_QWORD*)(a1 + 64);
	*(_QWORD*)(*(_QWORD*)(a1 + 64) + 24i64) = *(_QWORD*)(a1 + 64);
	v5 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 104) = v5;
	*(_BYTE*)v5 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 104) + 8i64) = 0i64;
	v6 = 4i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 104) + 16i64) = *(_QWORD*)(a1 + 104);
	*(_QWORD*)(*(_QWORD*)(a1 + 104) + 24i64) = *(_QWORD*)(a1 + 104);
	*(_DWORD*)(a1 + 8) = a2;
	*(_DWORD*)(a1 + 12) = 0;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	v7 = (_DWORD*)(a1 + 32);
	do
	{
		*(v7 - 4) = 0;
		*v7++ = 0;
		--v6;
	} while (v6);
	return a1;
}
// 140B6C8D8: using guessed type __int64 (__fastcall *off_140B6C8D8)();

