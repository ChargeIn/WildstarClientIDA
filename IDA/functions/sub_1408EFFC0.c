//----- (00000001408EFFC0) ----------------------------------------------------
void** __fastcall sub_1408EFFC0(int* a1, __int64 a2, int a3, int* a4, int a5, int a6)
{
	void** result; // rax
	int v7; // ebx
	int v8; // esi
	int i; // r12d
	unsigned int v12; // eax
	__int64 v13; // rbp
	int v14; // r9d
	__int64 v15; // rdx
	int v16; // r9d
	__int64 v17; // r10
	int v18; // r8d
	__int64 v19; // rdx
	int v20; // r11d
	int* v21; // rdx
	int v22; // r9d
	int v23; // ecx
	int v24; // r8d
	int v25; // r9d
	int v26; // r11d
	int v27; // r10d
	__int64 v28; // rdx
	int* v29; // rdx
	int v30; // eax
	int v31; // r8d
	int v32; // eax
	__int64 v33; // r8
	_DWORD* v34; // rdx
	int v36[18]; // [rsp+20h] [rbp-48h] BYREF
	void* retaddr; // [rsp+68h] [rbp+0h] BYREF
	int* v38; // [rsp+88h] [rbp+20h]

	result = &retaddr;
	v38 = a4;
	v7 = 0;
	v8 = a3;
	for (i = a3 + a5; v8 < i; a4 = v38)
	{
		v12 = sub_1408EFB20((__int64)a1, a4);
		v13 = *a1;
		if (a1[8] == 1)
		{
			v14 = a1[13];
			v15 = 0i64;
			do
			{
				v36[v15++] = v12 & ((1 << v14) - 1);
				v12 >>= v14;
			} while (v15 < v13);
		}
		else
		{
			v16 = a1[14];
			v17 = *((_QWORD*)a1 + 8);
			v18 = 0;
			v19 = 0i64;
			v20 = (1 << v16) - 1;
			if (a1[13] > 8)
			{
				do
				{
					v36[v19++] = *(unsigned __int16*)(v17 + 2i64 * (v20 & v12));
					v12 >>= v16;
				} while (v19 < v13);
			}
			else
			{
				v21 = v36;
				do
				{
					++v18;
					*v21++ = *(unsigned __int8*)((v20 & v12) + v17);
					v12 >>= v16;
				} while (v18 < (int)v13);
			}
		}
		v22 = a1[9];
		v23 = a6 - a1[10];
		v24 = a6 - a1[12];
		if (v23 <= 0)
			v25 = v22 << -(char)v23;
		else
			v25 = v22 >> v23;
		v26 = a1[11];
		v27 = 0;
		v28 = 0i64;
		if (v24 <= 0)
		{
			v31 = a1[12] - a6;
			do
			{
				v32 = v36[v28++];
				v36[v28 - 1] = v25 + ((v26 * v32) << v31);
			} while (v28 < v13);
		}
		else
		{
			v29 = v36;
			do
			{
				v30 = *v29;
				++v27;
				*v29++ = v25 + ((v26 * v30) >> v24);
			} while (v27 < (int)v13);
		}
		v33 = 0i64;
		do
		{
			++v33;
			v34 = (_DWORD*)(*(_QWORD*)(a2 + 8i64 * v7) + 4i64 * v8);
			*v34 += v36[v33 - 1];
			result = (void**)(v7 & 1);
			v8 += (int)result;
			v7 = ((_BYTE)v7 - 1) & 1;
		} while (v33 < v13);
	}
	return result;
}
// 1408EFFC0: using guessed type int var_48[18];

