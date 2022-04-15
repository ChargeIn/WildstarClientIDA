//----- (0000000140882510) ----------------------------------------------------
__int64 __fastcall sub_140882510(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rbx
	_QWORD* v3; // rdi
	unsigned __int64 v5; // rax
	unsigned __int64 v6; // rdi
	__int64 result; // rax

	if (a2)
	{
		v2 = (_QWORD*)(a2 - 16);
		v3 = (_QWORD*)(a2 - 16 + 8);
		v5 = *v3 & 0xFFFFFFFFFFFFFFFCui64;
		*(_QWORD*)((char*)v2 + v5 + 16) |= 2ui64;
		*(_QWORD*)((char*)v2 + v5 + 8) = v2;
		*v3 |= 1ui64;
		if ((*(_BYTE*)v3 & 2) != 0)
		{
			v2 = (_QWORD*)*v2;
			sub_1408821B0(a1, v2);
			v2[1] += (*v3 & 0xFFFFFFFFFFFFFFFCui64) + 8;
			*(_QWORD*)((char*)v2 + (v2[1] & 0xFFFFFFFFFFFFFFFCui64) + 8) = v2;
		}
		v6 = v2[1] & 0xFFFFFFFFFFFFFFFCui64;
		if ((*((_BYTE*)v2 + v6 + 16) & 1) != 0)
		{
			sub_1408821B0(a1, (_QWORD*)((char*)v2 + v6 + 8));
			v2[1] += (*(_QWORD*)((char*)v2 + v6 + 16) & 0xFFFFFFFFFFFFFFFCui64) + 8;
			*(_QWORD*)((char*)v2 + (v2[1] & 0xFFFFFFFFFFFFFFFCui64) + 8) = v2;
		}
		return sub_140881EC0(a1, v2);
	}
	return result;
}

