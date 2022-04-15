//----- (0000000140874330) ----------------------------------------------------
__int64 __fastcall sub_140874330(__int64* a1, unsigned __int64 a2, __int64* a3)
{
	__int64* v3; // rbx
	__int64 result; // rax
	unsigned __int64 v7; // rdi
	unsigned int v8; // eax
	__int64 v9; // rsi
	__int64 v10; // rcx
	unsigned __int64 v11; // rcx

	v3 = a1 + 24;
	result = sub_140834F40(a1 + 24, a2);
	v7 = result;
	if (result)
	{
		v8 = *(_DWORD*)(result + 8);
		if (v8 > 1)
		{
			result = v8 - 1;
			*(_DWORD*)(v7 + 8) = result;
		}
		else
		{
			if (!(*(unsigned __int8(__fastcall**)(__int64*))(*a1 + 672))(a1))
			{
				v9 = *(_QWORD*)v7;
				if (*(_QWORD*)v7)
					sub_140865FB0(*(_QWORD*)v7);
				v10 = *a3;
				*a3 = v9;
				if (v10)
					sub_140866000(v10);
			}
			result = sub_140866000(*(_QWORD*)v7);
			v11 = v3[1] - 16;
			if (v7 < v11)
			{
				result = 0x1FFFFFFFFFFFFFFEi64;
				qmemcpy(
					(void*)v7,
					(const void*)(v7 + 16),
					8 * (((((v11 - v7 - 1) >> 3) & 0xFFFFFFFFFFFFFFFEui64) + 2) & 0x1FFFFFFFFFFFFFFEi64));
			}
			v3[1] -= 16i64;
		}
	}
	return result;
}

