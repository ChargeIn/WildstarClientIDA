//----- (0000000140884A40) ----------------------------------------------------
__int64 __fastcall sub_140884A40(__int64 a1, _DWORD* a2)
{
	unsigned int v2; // r8d
	__int64* v5; // rbx
	__int64 v6; // rax
	__int64* v8; // rdx
	__int64 v9; // r8
	__int64 v10; // r9
	unsigned __int64 v11; // rcx
	int v12; // ecx

	v2 = *(unsigned __int8*)(a1 + 192);
	if (v2 >= *(_DWORD*)(a1 + 168))
	{
		*a2 = 0;
		return 0i64;
	}
	else
	{
		v5 = *(__int64**)(a1 + 176);
		if (*(_BYTE*)(a1 + 192))
		{
			v6 = *(unsigned __int8*)(a1 + 192);
			do
			{
				v5 = (__int64*)*v5;
				--v6;
			} while (v6);
		}
		if (*(_QWORD*)v5[1] + *((unsigned int*)v5 + 4) == *(_QWORD*)(a1 + 128))
		{
			*(_BYTE*)(a1 + 192) = v2 + 1;
			*(_QWORD*)(a1 + 128) = *(_QWORD*)v5[1] + *(unsigned int*)(v5[1] + 24);
			*a2 = *(_DWORD*)(v5[1] + 24) - *((_DWORD*)v5 + 4);
			v8 = (__int64*)v5[1];
			v9 = *((unsigned int*)v5 + 4);
			v10 = *v8;
			v11 = *(unsigned int*)(a1 + 148);
			if (*v8 + v9 >= v11 || v10 + (unsigned __int64)*((unsigned int*)v8 + 6) <= v11)
				v12 = *((_DWORD*)v8 + 6);
			else
				v12 = v11 - v10;
			*(_DWORD*)(a1 + 156) -= v12 - v9;
			sub_140885F10(a1);
			return *(_QWORD*)(v5[1] + 8) + *((unsigned int*)v5 + 4);
		}
		else
		{
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 88i64))(a1, 0i64);
			sub_1408843E0(a1);
			*a2 = 0;
			return 0i64;
		}
	}
}

