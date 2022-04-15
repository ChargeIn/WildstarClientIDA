//----- (00000001408797C0) ----------------------------------------------------
__int64 __fastcall sub_1408797C0(__int64 a1)
{
	__int64 v1; // rdx
	_QWORD* v2; // rbx
	int v3; // ecx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 64);
	v2 = (_QWORD*)(a1 + 64);
	if (v1)
	{
		v3 = *(_DWORD*)(a1 + 132);
		if (v3 >= 0)
		{
			result = sub_140833130((HIBYTE(v3) & 0x1F) << 10, v1);
			*v2 = 0i64;
		}
		else
		{
			return sub_140868480((__int64)v2);
		}
	}
	return result;
}

