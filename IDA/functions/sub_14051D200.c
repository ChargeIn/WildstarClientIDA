//----- (000000014051D200) ----------------------------------------------------
__int64 __fastcall sub_14051D200(__int64 a1, _QWORD* a2)
{
	__int64 v2; // rbx
	__int64 v4; // rax
	__int64 result; // rax

	v2 = 0i64;
	*(_DWORD*)(a1 + 16) = 0;
	v4 = sub_140056AB0(a2, 3u);
	if (v4)
		v2 = *(_QWORD*)(v4 + 8);
	result = 0i64;
	*(_DWORD*)(a1 + 16) = **(_DWORD**)(v2 + 8);
	return result;
}

