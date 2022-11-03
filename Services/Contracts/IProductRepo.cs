using YathOnline.Models;
using YathOnline.Models.Dtos;

namespace YathOnline.Web.Services.Contracts
{
    public interface IProductRepo
    {
        Task<ClientPayload<IEnumerable<ProductDto>>> GetProductsByCategory(int? productCategoryId, int? numberOfProductToFetch);
        Task<ClientPayload<IEnumerable<ProductCategoryDto>>?> GetProductCategories();
    }
}
