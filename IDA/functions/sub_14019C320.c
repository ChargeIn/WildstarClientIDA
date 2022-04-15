//----- (000000014019C320) ----------------------------------------------------
__int64 __fastcall sub_14019C320(__int64 a1)
{
	int* v2; // rax
	int* v3; // rax
	int* v4; // rax

	v2 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 16) = v2;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 24i64) = *(_QWORD*)(a1 + 16);
	v3 = sub_14018B280(24i64, 0);
	*(_QWORD*)(a1 + 48) = v3;
	*(_QWORD*)v3 = v3;
	*(_QWORD*)(*(_QWORD*)(a1 + 48) + 8i64) = *(_QWORD*)(a1 + 48);
	v4 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 64) = v4;
	*(_QWORD*)v4 = v4;
	*(_QWORD*)(*(_QWORD*)(a1 + 64) + 8i64) = *(_QWORD*)(a1 + 64);
	*(_DWORD*)a1 = 1;
	return a1;
}

