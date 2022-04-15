//----- (0000000140956150) ----------------------------------------------------
__int64 sub_140956150()
{
	char* v0; // rbx
	int i; // edi
	__int64 v2; // rcx
	__int64 result; // rax

	v0 = (char*)&unk_140C7E730;
	for (i = 6; i >= 0; --i)
	{
		v2 = *((_QWORD*)v0 - 2);
		v0 -= 16;
		if (v2)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v2 - 16) + 8i64))(v2 - 16);
	}
	return result;
}

