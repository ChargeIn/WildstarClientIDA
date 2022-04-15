//----- (00000001402807E0) ----------------------------------------------------
_DWORD* __fastcall sub_1402807E0(__int64 a1)
{
	__int64 v1; // rax
	int v3; // edx
	_DWORD* result; // rax
	int v5; // ecx

	v1 = *(_QWORD*)(a1 + 8592);
	if (v1)
		return (_DWORD*)(v1 + 144);
	v3 = *(_DWORD*)(a1 + 56);
	result = (_DWORD*)(a1 + 8608);
	*(_DWORD*)(a1 + 8612) = 0;
	if (!v3)
		v3 = 1;
	*(_DWORD*)(a1 + 8624) = 0;
	*(_DWORD*)(a1 + 8628) = 1065353216;
	*(_DWORD*)(a1 + 8616) = v3;
	v5 = *(_DWORD*)(a1 + 60);
	*result = 0;
	if (!v5)
		v5 = 1;
	*(_DWORD*)(a1 + 8620) = v5;
	return result;
}

