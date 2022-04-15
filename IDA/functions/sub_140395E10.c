//----- (0000000140395E10) ----------------------------------------------------
void __fastcall sub_140395E10(__int64 a1, int a2)
{
	__int64 v3; // rax
	__int64* v4; // rax

	if (a2)
	{
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 128i64))(*(_QWORD*)(a1 + 16));
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 144i64))(*(_QWORD*)(a1 + 16));
		v3 = *(_QWORD*)(a1 + 8);
		if (!*(_DWORD*)(v3 + 104))
			v3 = *(_QWORD*)(v3 + 32);
		v4 = (__int64*)(v3 + 336);
		if (*v4)
			sub_1407C2C10(*v4, *(_QWORD*)(*(_QWORD*)*v4 + 8 * v4[2]));
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 192i64))(*(_QWORD*)(a1 + 16));
	}
}

