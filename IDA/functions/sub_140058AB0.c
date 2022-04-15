//----- (0000000140058AB0) ----------------------------------------------------
__int64 __fastcall sub_140058AB0(__int64 a1, int a2)
{
	__int64* v3; // rax
	__int64 v4; // rbx
	__int64* v5; // rsi
	_QWORD* v6; // rax
	__int64 result; // rax
	__int64 v8; // rdx
	__int64 v9; // rcx

	v3 = (__int64*)sub_1400580E0(a1, a2);
	v4 = *(_QWORD*)(a1 + 16);
	v5 = v3;
	v6 = sub_14005C560(a1, *v3, (int*)(v4 - 32));
	*v6 = *(_QWORD*)(v4 - 16);
	*((_DWORD*)v6 + 2) = *(_DWORD*)(v4 - 8);
	result = *(_QWORD*)(a1 + 16);
	if (*(int*)(result - 8) >= 4)
	{
		result = *(_QWORD*)(result - 16);
		if ((*(_BYTE*)(result + 9) & 3) != 0)
		{
			v8 = *v5;
			if ((*(_BYTE*)(*v5 + 9) & 4) != 0)
			{
				v9 = *(_QWORD*)(a1 + 32);
				*(_BYTE*)(v8 + 9) &= ~4u;
				result = *(_QWORD*)(v9 + 64);
				*(_QWORD*)(v8 + 48) = result;
				*(_QWORD*)(v9 + 64) = v8;
			}
		}
	}
	*(_QWORD*)(a1 + 16) -= 32i64;
	return result;
}

