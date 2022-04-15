//----- (000000014082B460) ----------------------------------------------------
__int64 __fastcall sub_14082B460(__int64 a1, __int64 a2)
{
	_DWORD* v3; // rcx
	_DWORD* v4; // rdi
	__int64 result; // rax

	*(_DWORD*)(a1 + 24) = *(_DWORD*)(a2 + 24);
	*(_QWORD*)a1 = *(_QWORD*)a2;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a2 + 8);
	v3 = *(_DWORD**)(a1 + 16);
	v4 = *(_DWORD**)(a2 + 16);
	if (v3)
		sub_140828460(v3);
	result = a1;
	if (v4)
		++* v4;
	*(_QWORD*)(a1 + 16) = v4;
	return result;
}

