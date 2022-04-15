//----- (00000001403D8790) ----------------------------------------------------
__int64 __fastcall sub_1403D8790(__int64 a1, __int64 a2)
{
	__int64* v4; // rcx

	*(_QWORD*)a1 = *(_QWORD*)a2;
	v4 = (__int64*)(a1 + 16);
	*((_DWORD*)v4 - 2) = *(_DWORD*)(a2 + 8);
	sub_140003500(v4, a2 + 16);
	*(_DWORD*)(a1 + 32) = *(_DWORD*)(a2 + 32);
	*(_QWORD*)(a1 + 40) = *(_QWORD*)(a2 + 40);
	*(_QWORD*)(a1 + 48) = *(_QWORD*)(a2 + 48);
	*(_QWORD*)(a1 + 56) = *(_QWORD*)(a2 + 56);
	*(_QWORD*)(a1 + 64) = *(_QWORD*)(a2 + 64);
	*(_QWORD*)(a1 + 72) = *(_QWORD*)(a2 + 72);
	*(_QWORD*)(a1 + 80) = *(_QWORD*)(a2 + 80);
	sub_1403D86E0((__int64*)(a1 + 88), a2 + 88);
	return a1;
}

