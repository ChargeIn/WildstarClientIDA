//----- (00000001404D53C0) ----------------------------------------------------
__int64 __fastcall sub_1404D53C0(__int64 a1, __int64 a2)
{
	__int64 v4; // rbx
	__int64 v5; // rbx
	int* v6; // rax
	int* v7; // rdi
	unsigned __int64 v8; // rbx

	*(_QWORD*)a1 = *(_QWORD*)a2;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a2 + 8);
	*(_DWORD*)(a1 + 12) = *(_DWORD*)(a2 + 12);
	*(_DWORD*)(a1 + 16) = *(_DWORD*)(a2 + 16);
	*(_DWORD*)(a1 + 20) = *(_DWORD*)(a2 + 20);
	*(_DWORD*)(a1 + 24) = *(_DWORD*)(a2 + 24);
	*(_DWORD*)(a1 + 28) = *(_DWORD*)(a2 + 28);
	*(_DWORD*)(a1 + 32) = *(_DWORD*)(a2 + 32);
	*(_DWORD*)(a1 + 36) = *(_DWORD*)(a2 + 36);
	*(_DWORD*)(a1 + 40) = *(_DWORD*)(a2 + 40);
	v4 = *(_QWORD*)(a2 + 48);
	if (v4)
	{
		v5 = *(_QWORD*)(v4 - 8);
		v6 = sub_14018B280(2 * v5 + 18, 0);
		if (v6)
		{
			*((_QWORD*)v6 + 1) = v5;
			*(_QWORD*)v6 = off_140B55060;
		}
		else
		{
			v6 = 0i64;
		}
		v7 = v6 + 4;
		v8 = 2 * v5;
		sub_1407DB590(v6 + 4, *(int**)(a2 + 48), v8);
		*(_WORD*)((char*)v7 + v8) = 0;
		*(_QWORD*)(a1 + 48) = v7;
	}
	else
	{
		*(_QWORD*)(a1 + 48) = 0i64;
	}
	sub_1404D54B0((__int64*)(a1 + 56), (_QWORD*)(a2 + 56));
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

