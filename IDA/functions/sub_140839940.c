//----- (0000000140839940) ----------------------------------------------------
_DWORD* __fastcall sub_140839940(__int64 a1, unsigned int a2)
{
	_DWORD* result; // rax
	_DWORD* v3; // rdi
	unsigned __int64 v4; // rsi
	_QWORD* v6; // rbx
	_DWORD* v7; // rcx
	_DWORD* v8; // rcx

	result = *(_DWORD**)a1;
	v3 = (_DWORD*)(*(_QWORD*)a1 + 24i64 * a2);
	v4 = *(_QWORD*)(a1 + 8) - 24i64;
	if ((unsigned __int64)v3 < v4)
	{
		v6 = v3 + 8;
		do
		{
			v7 = (_DWORD*)*(v6 - 2);
			if (v7)
				sub_140828460(v7);
			*v3 = *((_DWORD*)v6 - 2);
			*((_DWORD*)v6 - 7) = *((_DWORD*)v6 - 1);
			*(v6 - 3) = *v6;
			result = (_DWORD*)v6[1];
			*(v6 - 2) = result;
			if (result)
				++* result;
			v3 += 6;
			v6 += 3;
		} while ((unsigned __int64)v3 < v4);
	}
	v8 = *(_DWORD**)(v4 + 16);
	if (v8)
		result = (_DWORD*)sub_140828460(v8);
	*(_QWORD*)(a1 + 8) -= 24i64;
	return result;
}

