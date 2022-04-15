//----- (00000001405F7A10) ----------------------------------------------------
__int64 __fastcall sub_1405F7A10(__int64* a1)
{
	bool v2; // zf
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 result; // rax
	__int64 v6; // rbx
	unsigned int v7; // eax
	__int64 v8; // rbx
	unsigned int v9; // eax

	v2 = *(_DWORD*)((*(__int64(__fastcall**)(__int64*))(*a1 + 328))(a1) + 64) == 0;
	v3 = *a1;
	if (v2)
	{
		if ((*(unsigned int(__fastcall**)(__int64*))(v3 + 216))(a1))
		{
			return *((unsigned int*)a1 + 7);
		}
		else if ((*(unsigned int(__fastcall**)(__int64*))(*a1 + 336))(a1) == 19
			&& (*(unsigned int(__fastcall**)(__int64*))(*a1 + 192))(a1)
			&& (v6 = *(_QWORD*)a1[1],
				v7 = (*(__int64(__fastcall**)(__int64*))(*a1 + 368))(a1),
				(*(unsigned int(__fastcall**)(__int64, _QWORD))(v6 + 384))(a1[1], v7)))
		{
			v8 = *(_QWORD*)a1[1];
			v9 = (*(__int64(__fastcall**)(__int64*))(*a1 + 368))(a1);
			LODWORD(v8) = (*(__int64(__fastcall**)(__int64, _QWORD))(v8 + 384))(a1[1], v9);
			return (unsigned int)(*(_DWORD*)((*(__int64(__fastcall**)(__int64*))(*a1 + 328))(a1) + 44) * v8);
		}
		else
		{
			return *(unsigned int*)((*(__int64(__fastcall**)(__int64*))(*a1 + 328))(a1) + 44);
		}
	}
	else
	{
		v4 = (*(__int64(__fastcall**)(__int64*))(v3 + 328))(a1);
		result = sub_14020FD40(*(_DWORD*)(v4 + 64));
		if (result)
			return *(unsigned int*)(result + 8);
	}
	return result;
}

