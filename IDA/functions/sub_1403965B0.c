//----- (00000001403965B0) ----------------------------------------------------
void __fastcall sub_1403965B0(__int64 a1, int a2)
{
	__int64 v3; // rcx
	__int64 v4; // rax
	__int64* v5; // rax

	v3 = *(_QWORD*)(a1 + 40);
	if (v3 && a2)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v3 + 296i64))(v3, 1i64);
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 40) + 320i64))(*(_QWORD*)(a1 + 40), 1i64);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 40) + 112i64))(*(_QWORD*)(a1 + 40));
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 40) + 128i64))(*(_QWORD*)(a1 + 40));
		v4 = *(_QWORD*)(a1 + 16);
		if (!*(_DWORD*)(v4 + 104))
			v4 = *(_QWORD*)(v4 + 32);
		v5 = (__int64*)(v4 + 336);
		if (*v5)
			sub_1407C2C10(*v5, *(_QWORD*)(*(_QWORD*)*v5 + 8 * v5[2]));
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 40) + 256i64))(*(_QWORD*)(a1 + 40));
	}
}

