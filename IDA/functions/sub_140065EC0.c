//----- (0000000140065EC0) ----------------------------------------------------
__int64 __fastcall sub_140065EC0(__int64 a1, __int64* a2, __int64 a3)
{
	__int64 v3; // rsi
	__int64 v6; // rdi
	__int64 v8; // rbx
	__int64 v9; // rcx
	char v10; // r8
	__int64 v11; // rcx
	int v12; // eax
	__int64 result; // rax
	int v14; // edi
	_BYTE* v15; // rbx
	int v16; // eax

	v3 = *(_QWORD*)(a1 + 48);
	v6 = *(_QWORD*)v3;
	v8 = *(int*)(*(_QWORD*)v3 + 88i64);
	if (*(_DWORD*)(v3 + 68) + 1 > (int)v8)
		*(_QWORD*)(v6 + 32) = sub_140064690(
			*(_QWORD*)(a1 + 56),
			*(_QWORD*)(v6 + 32),
			(int*)(v6 + 88),
			8ui64,
			0x3FFFF,
			aConstantTableO);
	if ((int)v8 < *(_DWORD*)(v6 + 88))
	{
		v9 = 8 * v8;
		do
		{
			LODWORD(v8) = v8 + 1;
			v9 += 8i64;
			*(_QWORD*)(v9 + *(_QWORD*)(v6 + 32) - 8) = 0i64;
		} while ((int)v8 < *(_DWORD*)(v6 + 88));
	}
	*(_QWORD*)(*(_QWORD*)(v6 + 32) + 8i64 * (int)(*(_DWORD*)(v3 + 68))++) = *a2;
	if ((*(_BYTE*)(*a2 + 9) & 3) != 0)
	{
		v10 = *(_BYTE*)(v6 + 9);
		if ((v10 & 4) != 0)
		{
			v11 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 32i64);
			if (*(_BYTE*)(v11 + 33) == 1)
				sub_14005C960(v11, *a2);
			else
				*(_BYTE*)(v6 + 9) = v10 & 0xF8 | *(_BYTE*)(v11 + 32) & 3;
		}
	}
	v12 = sub_14006BBF0(v3, ((*(_DWORD*)(v3 + 68) - 1) << 14) | 0x24u, *(_DWORD*)(*(_QWORD*)(v3 + 24) + 8i64));
	*(_QWORD*)(a3 + 16) = -1i64;
	*(_DWORD*)a3 = 11;
	*(_DWORD*)(a3 + 8) = v12;
	result = *a2;
	v14 = 0;
	if (*(_BYTE*)(*a2 + 112))
	{
		v15 = (char*)a2 + 75;
		do
		{
			v16 = 4;
			if (*v15 == 6)
				v16 = 0;
			sub_14006BBF0(v3, v16 | ((unsigned __int8)v15[1] << 23), *(_DWORD*)(*(_QWORD*)(v3 + 24) + 8i64));
			result = *a2;
			++v14;
			v15 += 2;
		} while (v14 < *(unsigned __int8*)(*a2 + 112));
	}
	return result;
}

