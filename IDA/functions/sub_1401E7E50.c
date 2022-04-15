//----- (00000001401E7E50) ----------------------------------------------------
__int64 __fastcall sub_1401E7E50(__int64 a1, __int64* a2)
{
	unsigned __int64 v4; // rbx
	__int64 v5; // rdi
	__int64 v6; // r8
	__int64 v7; // rax
	__int64 v8; // r8
	__int64 v9; // rax
	__int64 v10; // rdx
	__int64 result; // rax

	v4 = 2936i64;
	v5 = 0i64;
	do
	{
		v6 = *(_QWORD*)(a1 + 16);
		v7 = *a2;
		if (*(_QWORD*)(v4 + v6))
			(*(void(__fastcall**)(__int64*, _QWORD, _QWORD))(v7 + 776))(
				a2,
				*(unsigned int*)((char*)&unk_140C2D3F8 + v5),
				*(_QWORD*)(v4 + v6));
		else
			(*(void(__fastcall**)(__int64*, _QWORD, _QWORD))(v7 + 784))(
				a2,
				*(unsigned int*)((char*)&unk_140C2D3F8 + v5),
				*(_QWORD*)(v4 + v6 + 32));
		v8 = *(_QWORD*)(a1 + 16);
		v9 = *a2;
		v10 = *(unsigned int*)((char*)&unk_140C2D3E8 + v5);
		if (*(_QWORD*)(v4 + v8 + 64))
			result = (*(__int64(__fastcall**)(__int64*, __int64, _QWORD))(v9 + 776))(a2, v10, *(_QWORD*)(v4 + v8 + 64));
		else
			result = (*(__int64(__fastcall**)(__int64*, __int64, _QWORD))(v9 + 784))(a2, v10, *(_QWORD*)(v4 + v8 + 96));
		v4 += 8i64;
		v5 += 4i64;
	} while (v4 < 0xB98);
	return result;
}

