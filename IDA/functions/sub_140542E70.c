//----- (0000000140542E70) ----------------------------------------------------
__int64 __fastcall sub_140542E70(__int64 a1, int a2, unsigned int a3, int a4)
{
	__int64 v8; // rax
	int v9; // edi
	__int64 v10; // rbx
	unsigned int v11; // ebp
	int v12; // eax

	if (!a3)
		return (unsigned int)(a2 + a4);
	v8 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 340));
	v9 = 0;
	if (v8)
		v10 = *(_QWORD*)(v8 + 5864);
	else
		v10 = 0i64;
	if (v8)
		v11 = sub_140470540((_DWORD*)v8, *(_DWORD*)(a1 + 88));
	else
		v11 = 0;
	if (v10 && (*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v10 + 408i64))(v10, v11))
	{
		v12 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v10 + 432i64))(
			v10,
			v11,
			*(unsigned int*)(a1 + 84),
			a3);
		if (v12 == -1)
			v12 = 0;
		v9 = v12;
	}
	return (unsigned int)(a4 + v9 + a2);
}
// 140C65898: using guessed type __int64 qword_140C65898;

